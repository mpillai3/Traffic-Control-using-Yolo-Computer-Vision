//
//  AverageCongestionScores.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-01.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AverageCongestionScores_hpp
#define AverageCongestionScores_hpp

#include <map>
#include "DayTimeBlockPair.hpp"
#include "CongestionScore.hpp"

namespace traffictrack {
    
    /** @class AverageCongestionScores
     *  @brief calculate the average congestion scores based on daytimeblock pair and congestion scores
     *  @author Matthew Lovick
     */
    class AverageCongestionScores : public std::map<traffictrack::DayTimeBlockPair, CongestionScore> {
        
    public:
        using map<traffictrack::DayTimeBlockPair, CongestionScore>::map;
        virtual ~AverageCongestionScores() { };
        
    };
    
}

#endif /* AverageCongestionScores_hpp */
