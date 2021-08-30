//
//  FormatException.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-09.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef FormatException_hpp
#define FormatException_hpp

#include <string>
#include "BaseException.hpp"

/** @class FormatException
 *  @brief formats exception with a message
 *  @author Matthew Lovick
 */
class FormatException : public BaseException {
    
public:
    FormatException();
    FormatException(const std::string& message);
    
};

#endif /* FormatException_hpp */
