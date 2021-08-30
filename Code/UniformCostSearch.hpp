//
//  UniformCostSearch.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-30.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef UniformCostSearch_hpp
#define UniformCostSearch_hpp

#include <vector>
#include <unordered_map>
#include <utility>
#include "Intersection.hpp"
#include "IntersectionID.h"
#include "AbstractPathFinder.hpp"


/** @class UniformCostSearch
 *  @brief implements the AbstractPathFinder using a uniform cost search algorithm
 *  @author Matthew Lovick
 */
class UniformCostSearch : public AbstractPathFinder {
    
public:
    virtual ~UniformCostSearch();
    virtual std::pair<std::vector<Intersection*>, float> search(Intersection* startState, std::unordered_map<traffictrack::IntersectionID, Intersection*>& intersections);
    
};

#endif /* UniformCostSearch_hpp */
