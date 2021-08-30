//
//  AbstractIntersectionState.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-02.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractIntersectionState_hpp
#define AbstractIntersectionState_hpp

#include <chrono>

class Intersection;

/** @class AbstractIntersectionState
 *  @brief abstract class for IntersectionState class which will have interval times and the ability to change lights based on a calculated traffic ratio
 *  @author Matthew Lovick
 */
class AbstractIntersectionState {
    
protected:
    std::chrono::seconds intervalTime_;
    
public:
    AbstractIntersectionState(std::chrono::seconds intervalTime);
    virtual ~AbstractIntersectionState();
    virtual std::chrono::seconds intervalTime() const;
    virtual void changeLights(Intersection* intersection) = 0;
    virtual float trafficRatio(int northSouthTraffic, int eastWestTraffic) = 0;
    
};

#endif /* AbstractIntersectionState_hpp */
