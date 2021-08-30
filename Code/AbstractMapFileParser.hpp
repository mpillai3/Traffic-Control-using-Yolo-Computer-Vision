//
//  AbstractMapFileParser.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-09.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractMapFileParser_hpp
#define AbstractMapFileParser_hpp

#include <unordered_map>
#include <string>
#include "IntersectionID.h"

class Intersection;


/** @class AbstractMapFileParser
 *  @brief abstract class for a parser that will read from a file and generate intersections and roads from it
 *          each concrete parser would support different file formats to convey different information
 *  @author Matthew Lovick
 */
class AbstractMapFileParser {
    
public:
    virtual ~AbstractMapFileParser() { };
    virtual void parse(const std::string filename, std::unordered_map<traffictrack::IntersectionID, Intersection*>& intersections) const = 0;
    
};

#endif /* AbstractMapFileParser_hpp */
