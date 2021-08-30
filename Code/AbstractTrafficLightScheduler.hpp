//
//  AbstractTrafficLightScheduler.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-01.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractTrafficLightScheduler_hpp
#define AbstractTrafficLightScheduler_hpp

#include <unordered_map>
#include "IntersectionID.h"
#include "LightSchedule.hpp"
#include "AverageCongestionScores.hpp"

/** @class AbstractTrafficLightScheduler
 *  @brief abstract class for traffic light scheduler which will schedule  intersections based on the average congestion scores
 *  @author Matthew Lovick
 */
class AbstractTrafficLightScheduler {
    
public:
    typedef std::unordered_map<traffictrack::IntersectionID, traffictrack::LightSchedule> IntersectionSchedules;
    typedef std::unordered_map<traffictrack::IntersectionID, traffictrack::AverageCongestionScores> AverageScores;
    virtual ~AbstractTrafficLightScheduler() { };
    virtual IntersectionSchedules schedule(AverageScores) = 0;
    
};

#endif /* AbstractTrafficLightScheduler_hpp */
