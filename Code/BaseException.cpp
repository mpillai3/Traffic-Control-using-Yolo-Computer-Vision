//
//  BaseException.cpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#include "BaseException.hpp"

/** @fn BaseException
 *  @brief constructor
 */
BaseException::BaseException() : message_("") { }


/** @fn BaseException()
 *  @brief consructor
 *  @param message parameter - displays message
 *  @param exceptionType parameter - displays the type of exception
 */
BaseException::BaseException(const std::string& message, const std::string& exceptionType) : message_(message), exceptionType_(exceptionType) { }


/** @fn ~BaseException()
 *  @brief deconstructor for the base exception class
 */
BaseException::~BaseException() { }


/** @fn what()
 *  @brief displays the error message
 *  @return exception type and a message
 */
const char* BaseException::what() throw() {
    
    return (exceptionType_ + ": " + message_).c_str();
    
}
