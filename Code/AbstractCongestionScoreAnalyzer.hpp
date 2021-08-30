//
//  AbstractCongestionScoreAnalyzer.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-02.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractCongestionScoreAnalyzer_hpp
#define AbstractCongestionScoreAnalyzer_hpp

#include "CongestionScore.hpp"

class Intersection;

/** @class AbstractCongestionScoreAnalyzer
 *  @brief abstract class for defaultcongestionscore analyzer which will process congestion score based on the score and respective intersection
 *  @author Matthew Lovick
 */
class AbstractCongestionScoreAnalyzer {
    
public:
    virtual ~AbstractCongestionScoreAnalyzer() { };
    virtual void analyze(traffictrack::CongestionScore score, Intersection* intersection) = 0;
    
};

#endif /* AbstractCongestionScoreAnalyzer_hpp */
