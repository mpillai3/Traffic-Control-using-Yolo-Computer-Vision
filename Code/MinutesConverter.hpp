//
//  MinutesConverter.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-11.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef MinutesConverter_hpp
#define MinutesConverter_hpp

#include <chrono>
#include <ratio>
#include "AbstractDurationConverter.hpp"

/** @class MinutesConverter
 *  @brief converts minutes to seconds
 *  @author Matthew Lovick
 */
class MinutesConverter : public AbstractDurationConverter {
    
public:
    virtual ~MinutesConverter();
    virtual l_seconds convert(int time);
    
};

#endif /* MinutesConverter_hpp */
