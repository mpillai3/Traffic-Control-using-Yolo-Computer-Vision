//
//  AbstractIntersectionState.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-02.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include <chrono>
#include "AbstractIntersectionState.hpp"


/** @fn AbstractIntersectionState(std::chrono::seconds intervalTime)
 *  @brief constructor sets the interval time for the current intersection state
 *  @param intervalTime the interval time of the given state
 */
AbstractIntersectionState::AbstractIntersectionState(std::chrono::seconds intervalTime) {
    this->intervalTime_= intervalTime;
}


/** @fn ~AbstractIntersectionState()
 *  @brief destructor does nothing
 */
AbstractIntersectionState::~AbstractIntersectionState() { }


/** @fn intervalTime() const
 *  @brief getter for intervalTime member
 *  @return std::chrono::seconds the time of the interval
 */
std::chrono::seconds AbstractIntersectionState::intervalTime() const {
    return this->intervalTime_;
}
