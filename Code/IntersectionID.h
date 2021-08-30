//
//  IntersectionID.h
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef IntersectionID_h
#define IntersectionID_h

#include "StrongTypeDefModules.h"

namespace traffictrack {
    
    /** @class IntersectionID
     *  @brief abstract class - strong type for intersectionID to prevent ambiguity
     *  @author Matthew Lovick
     */
    class IntersectionID : public StrongTypes::StrongTypeDefBase<int>, StrongTypes::Comparable<IntersectionID>, StrongTypes::Outputtable<IntersectionID>, StrongTypes::Inputtable<IntersectionID> {
        
    public:
        using StrongTypeDefBase::StrongTypeDefBase;
        void operator = (const int& val) {
            ref() = val;
        }
        
    };
    
}

namespace std {
    
    template<>
    struct hash<traffictrack::IntersectionID> {
        size_t operator () (const traffictrack::IntersectionID& key) const {
            return std::hash<int>()(static_cast<int>(key));
        }
    };
    
}

#endif /* IntersectionID_h */
