//
//  AbstractStoppableThread.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-08.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractStoppableThread_hpp
#define AbstractStoppableThread_hpp

#include <future>
#include <mutex>
#include <thread>
#include <atomic>
#include <chrono>


/** @class AbstractStoppableThread
 *  @brief abstract class that gives a class the ability to run a thread inside it and have the thread
 *      creator be able to stop the thread at any point, even though the thread is owned inside the object
 *  @author Matthew Lovick
 */
class AbstractStoppableThread {
    
protected:
    std::thread* thread_; /**< thread that runs inside the object */
    std::mutex threadMutex_; /**< synchronize access of the thread_ variable */
    std::mutex signalMutex_; /**< used to ensure the promise value isn't set multiple times */
    std::atomic_bool running_; /**< syncrhonized access to variable to see if thread is running */
    std::promise<void> exitSignal_; /**< used to signal the thread to stop */
    std::future<void> futureObj_; /**< used to test for promise signal being set */
    
    bool stopRequested() const;
    template <typename Rep, typename Period> int waitFor(std::chrono::duration<Rep, Period> time);
    
public:
    AbstractStoppableThread();
    virtual ~AbstractStoppableThread();
    virtual bool run() = 0;
    void stop();
    
};


/**
 *  \brief templated method waits for the specified amount of time. by using future::wait_for, this
 *      waiting period is interruptable, as opposed to using a function like sleep_for
 *
 *  it is templated to allow the waiting for a variable period of time of type std::chrono::duration
 */
template <typename Rep, typename Period>
int AbstractStoppableThread::waitFor(std::chrono::duration<Rep, Period> time) {
    
    return futureObj_.wait_for(time) == std::future_status::timeout ? 0 : 1;
    
}

#endif /* AbstractStoppableThread_hpp */
