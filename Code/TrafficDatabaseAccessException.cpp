//
//  TrafficDatabaseAccessException.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-09.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include <string>
#include "TrafficDatabaseAccessException.hpp"

/** @fn TrafficDatabaseAccesssException
 *  @brief constructor
 */
TrafficDatabaseAccessException::TrafficDatabaseAccessException() : BaseException() { }


/** @fn TrafficDatabaseAccessException
 *  @brief constructor
 *  @param message for traffic database access exception
 */
TrafficDatabaseAccessException::TrafficDatabaseAccessException(std::string message) : BaseException(message, "TrafficDatabaseAccessException") { }

