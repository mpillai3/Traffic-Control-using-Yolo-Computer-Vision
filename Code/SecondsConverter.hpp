//
//  SecondsConverter.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-11.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef SecondsConverter_hpp
#define SecondsConverter_hpp

#include <chrono>
#include <ratio>
#include "AbstractDurationConverter.hpp"

/** @class SecondsConverter
 *  @brief converts seconds to long seconds
 *  @author Matthew Lovick
 */
class SecondsConverter : public AbstractDurationConverter {
    
public:
    virtual ~SecondsConverter();
    virtual l_seconds convert(int time);
    
};

#endif /* SecondsConverter_hpp */
