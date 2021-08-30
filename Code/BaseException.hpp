//
//  BaseException.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef BaseException_hpp
#define BaseException_hpp

#include <exception>
#include <string>

/** @class BaseException
 *  @brief class for handing base case exceptions
 *  @author Matthew Lovick
 */
class BaseException : public std::exception {
    
protected:
    const std::string exceptionType_;
    const std::string message_;
    
public:
    BaseException();
    BaseException(const std::string& message, const std::string& exceptionType = "BaseException");
    virtual ~BaseException();
    virtual const char* what() throw();
    
};

#endif /* BaseException_hpp */
