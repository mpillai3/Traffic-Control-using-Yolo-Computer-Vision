//
//  FormatException.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-09.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include <string>
#include "FormatException.hpp"


/** @fn FormatException
 *  @brief constructor
 */
FormatException::FormatException() : BaseException() { };


/** @fn FormatException
 *  @brief constructor
 *  @param message - a message that will display formatexception
 */
FormatException::FormatException(const std::string& message) : BaseException(message, "FormatException") { }
