//
//  AbstractDurationConverter.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-11.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractDurationConverter_hpp
#define AbstractDurationConverter_hpp

#include <chrono>
#include <ratio>


/**  @class AbstractDurationConverter
 *   @brief abstract class acting as abstract factory to convert integer expressions of time into durations.
 *   @author Matthew Lovick
 */
class AbstractDurationConverter {
    
protected:
    typedef std::chrono::duration<double, std::ratio<1,1>> l_seconds;
    
public:
    virtual ~AbstractDurationConverter() { };
    virtual l_seconds convert(int time) = 0;
    
};

#endif /* AbstractDurationConverter_hpp */
