//
//  DayTimeBlockPair.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-08.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef DayTimeBlockPair_hpp
#define DayTimeBlockPair_hpp

#include <string>
#include <utility>

namespace traffictrack {
    
    /** @class DayTimeBlockPair
     *  @brief typedef foro std::pair<std::string, int>
     *  @author Matthew Lovick
     */
    class DayTimeBlockPair : public std::pair<std::string, int> {
        
    public:
        using pair<std::string, int>::pair;
        virtual ~DayTimeBlockPair() { };
        
    };
    
}

#endif /* DayTimeBlockPair_hpp */
