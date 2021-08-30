//
//  MillisecondsConverter.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-11.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include <chrono>
#include <ratio>
#include "MillisecondsConverter.hpp"

/** @fn ~Milliseconds
 *  @brief deconstructor
 */
MillisecondsConverter::~MillisecondsConverter() { }


/** @fn convert
 *  @brief converts milliseconds to seconds
 *  @param time - takes in time as a parameter in milliseconds format
 *  @return - returns converted time in seconds
 */
MillisecondsConverter::l_seconds MillisecondsConverter::convert(int time) {
    return MillisecondsConverter::l_seconds((std::chrono::milliseconds(time)));
}
