//
//  TimeBlock.h
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef TimeBlock_h
#define TimeBlock_h

#include "StrongTypeDefModules.h"

namespace traffictrack {
    
    /** @class TimeBlock
     *  @brief abstract class - strong type for TimeBlock to prevent ambiguity
     *  @author Matthew Lovick
     */
    class TimeBlock : public StrongTypes::StrongTypeDefBase<int>, StrongTypes::Comparable<TimeBlock>, StrongTypes::Outputtable<TimeBlock>, StrongTypes::Inputtable<TimeBlock> {
        
    public:
        using StrongTypeDefBase::StrongTypeDefBase;
        void operator = (const int& val) {
            ref() = val;
        }
        
    };
    
}

#endif /* TimeBlock_h */
