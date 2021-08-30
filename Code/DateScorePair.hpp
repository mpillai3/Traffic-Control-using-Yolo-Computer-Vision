//
//  DateScorePair.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-08.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef DateScorePair_hpp
#define DateScorePair_hpp

#include <string>
#include <utility>
#include "CongestionScore.hpp"

namespace traffictrack {

    /** @class DateScorePair
     *  @brief serves as a typedef for std::pair<std::string, int>
     *  @author Matthew Lovick
     */
    class DateScorePair : public std::pair<std::string, CongestionScore> {
        
    public:
        using pair<std::string, CongestionScore>::pair;
        virtual ~DateScorePair(){};
        
    };
    
}

#endif /* DateScorePair_hpp */
