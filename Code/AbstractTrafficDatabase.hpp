//
//  AbstractTrafficDatabase.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-30.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractTrafficDatabase_hpp
#define AbstractTrafficDatabase_hpp

#include <unordered_map>
#include <chrono>
#include <ratio>
#include <future>
#include "AbstractStoppableThread.hpp"
#include "IntersectionID.h"
#include "DateScorePair.hpp"
#include "AverageCongestionScores.hpp"

/** @class AbstractTrafficDatabase
 *  @brief abstract class for the database which calculate averages based on the intersections and corresponding date score pairs
 *  @author Matthew Lovick
 */
class AbstractTrafficDatabase : public AbstractStoppableThread {
    
protected:
    using AbstractStoppableThread::stop;
    
public:
    typedef std::chrono::duration<double, std::ratio<1,1>> l_seconds;
    virtual ~AbstractTrafficDatabase() { };
    virtual bool log(traffictrack::IntersectionID intersection, traffictrack::DateScorePair date_score_pair) = 0;
    virtual const std::unordered_map<traffictrack::IntersectionID, traffictrack::AverageCongestionScores> calculateAverages() = 0;
    virtual void close() = 0;
    
    //from AbstractStoppableThread
    virtual bool run() = 0;
    
};

#endif /* AbstractTrafficDatabase_hpp */
