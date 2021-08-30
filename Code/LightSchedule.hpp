//
//  LightSchedule.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-09.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef LightSchedule_hpp
#define LightSchedule_hpp

#include <map>
#include <utility>
#include <chrono>
#include "DayTimeBlockPair.hpp"

namespace traffictrack {
    
    /** @class LightSchedule
     *  @brief wrapper class for a map that stores the intersections interval times for each daytimeblock
     *  @author Matthew Lovick
     */
    class LightSchedule : public std::map<traffictrack::DayTimeBlockPair, std::pair<std::chrono::seconds, std::chrono::seconds>> {
        
    public:
        using map<traffictrack::DayTimeBlockPair, std::pair<std::chrono::seconds, std::chrono::seconds>>::map;
        virtual ~LightSchedule() { };
        
    };
    
}

#endif /* LightSchedule_hpp */
