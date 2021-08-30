//
//  SecondsConverter.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-11.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include <chrono>
#include <ratio>
#include "SecondsConverter.hpp"

/** @fn ~SecondsConverter
 *  @brief deconstructor
 */
SecondsConverter::~SecondsConverter() { }


/** @fn convert
 *  @brief converts seconds to long seconds
 *  @param time - takes in time as a parameter in secondsformat
 *  @return - returns converted time in long seconds
 */
SecondsConverter::l_seconds SecondsConverter::convert(int time) {
    return SecondsConverter::l_seconds((std::chrono::seconds(time)));
}
