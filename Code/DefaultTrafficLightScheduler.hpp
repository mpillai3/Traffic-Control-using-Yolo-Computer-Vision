//
//  DefaultTrafficLightScheduler.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-01.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef DefaultTrafficLightScheduler_hpp
#define DefaultTrafficLightScheduler_hpp

#include "AbstractTrafficLightScheduler.hpp"

/** @class DefaultTrafficLightScheduler
 *  @brief schedules traffic lights based on average scores
 *  @author Matthew Lovick
 */
class DefaultTrafficLightScheduler : public AbstractTrafficLightScheduler {
    
public:
    virtual ~DefaultTrafficLightScheduler();
    virtual IntersectionSchedules schedule(AverageScores average_scores);
    
};

#endif /* DefaultTrafficLightScheduler_hpp */
