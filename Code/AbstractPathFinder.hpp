//
//  AbstractPathFinder.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-30.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractPathFinder_hpp
#define AbstractPathFinder_hpp

#include <vector>
#include <unordered_map>
#include <utility>
#include "Intersection.hpp"
#include "IntersectionID.h"

/** @class AbstractPathFinder
 *  @brief find shortest path based on start state and the intersections along the way
 *  @author Matthew Lovick
 */
class AbstractPathFinder {
    
public:
    virtual ~AbstractPathFinder() { };
    virtual std::pair<std::vector<Intersection*>, float> search(Intersection* startState, std::unordered_map<traffictrack::IntersectionID, Intersection*>& intersections) = 0;
    
};

#endif /* AbstractPathFinder_hpp */
