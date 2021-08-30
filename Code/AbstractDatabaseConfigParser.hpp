//
//  AbstractDatabaseConfigParser.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-11.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractDatabaseConfigParser_hpp
#define AbstractDatabaseConfigParser_hpp

#include <string>
#include <unordered_map>
#include "AbstractTrafficDatabase.hpp"
#include "IntersectionID.h"

class Intersection;

/** @class AbstractDatabaseConfigParser
 *  @brief abstract class for a parser that will read a config file and create the database based on the
 *      given parameters
 *  @author Matthew Lovick
 */ 
class AbstractDatabaseConfigParser {
    
public:
    virtual ~AbstractDatabaseConfigParser() { };
    virtual AbstractTrafficDatabase* parse(const std::string filename, const std::unordered_map<traffictrack::IntersectionID, Intersection*>& intersections) = 0;
    
};

#endif /* AbstractDatabaseConfigParser_hpp */
