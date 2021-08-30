//
//  DatabaseLocation.h
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef DatabaseLocation_h
#define DatabaseLocation_h

#include <string>
#include "StrongTypeDefModules.h"

namespace traffictrack {
    
    /** @class DatabaseLocation
     *   @brief abstract class to find the database location
     *   @author Matthew Lovick
     */
    class DatabaseLocation : public StrongTypes::StrongTypeDefBase<std::string>, StrongTypes::Addable<DatabaseLocation>, StrongTypes::Comparable<DatabaseLocation>, StrongTypes::Outputtable<DatabaseLocation>, StrongTypes::Inputtable<DatabaseLocation> {
        
    public:
        using StrongTypeDefBase::StrongTypeDefBase;
        void operator = (const std::string& val) {
            ref() = val;
        }
        
    };
    
}

#endif /* DatabaseLocation_h */
