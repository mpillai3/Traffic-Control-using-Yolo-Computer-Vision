//
//  EastWestState.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-02.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef EastWestState_hpp
#define EastWestState_hpp

#include <chrono>
#include "AbstractIntersectionState.hpp"

class Intersection;

/** @class EastWestState
 *  @brief changes lights based on ratio for the eastwest states
 *  @author Matthew Lovick
 */
class EastWestState : public AbstractIntersectionState {
    
public:
    using AbstractIntersectionState::AbstractIntersectionState;
    virtual ~EastWestState();
    virtual void changeLights(Intersection* intersection);
    virtual float trafficRatio(int northSouthTraffic, int eastWestTraffic);
    
};

#endif /* EastWestState_hpp */
