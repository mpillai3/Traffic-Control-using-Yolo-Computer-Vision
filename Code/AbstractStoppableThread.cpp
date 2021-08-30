//
//  AbstractStoppableThread.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-08.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include <chrono>
#include <future>
#include "AbstractStoppableThread.hpp"

using namespace std;
using namespace std::chrono;


/** @fn stopRequested() const
 *  @brief checks if a another thread requested to stop the internal looping thread
 *  @return bool if a request to stop the internal exists thread or not
 */
bool AbstractStoppableThread::stopRequested() const {

    return futureObj_.wait_for(milliseconds(0)) == future_status::timeout ? false: true;
    
}


/** @fn AbstractStoppableThread()
 *  @brief default constructor initializes members to default values
 */
AbstractStoppableThread::AbstractStoppableThread() {
    
    thread_ = nullptr;
    exitSignal_ = promise<void>();
    futureObj_ = exitSignal_.get_future();
    running_ = false;
    
}


/** @fn ~AbstractStoppableThread()
 *  @brief destructor stops and frees the thread if it is running
 */
AbstractStoppableThread::~AbstractStoppableThread() {
    stop();
}


/** @fn stop()
 *  @brief if the thread is running, signal the thread to stop and free the memory, set running to false
 */
void AbstractStoppableThread::stop() {
    
    if (running_) {
        
        lock_guard<mutex> signalGuard(signalMutex_);
        if (futureObj_.wait_for(milliseconds(0)) == future_status::timeout) {
            
            exitSignal_.set_value();
            
            lock_guard<mutex> threadGuard(threadMutex_);
            if (thread_ != nullptr) {
                if (thread_->joinable()) {
                    thread_->join();
                }
                delete thread_;
                thread_ = nullptr;
            }
            
            promise<void>().swap(exitSignal_);
            futureObj_ = exitSignal_.get_future();
            running_ = false;
            
        }
    }
    
}

