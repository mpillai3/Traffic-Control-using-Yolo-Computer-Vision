//
//  Cache.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef Cache_hpp
#define Cache_hpp

#include <vector>
#include <utility>
#include "DateScorePair.hpp"

/** @class Cache
 *  @brief cache class which adds datescore pairs and writes to filename
 *  @author Matthew Lovick
 */
class Cache {
    
protected:
    std::vector<std::pair<traffictrack::DateScorePair, bool>> data_;
    
public:
    virtual ~Cache();
    void add(traffictrack::DateScorePair date_score_pair, bool cached = false);
    int write(const std::string filename, const int min_cache_size);
    const std::vector<std::pair<traffictrack::DateScorePair, bool>>& data() const;
    
};

#endif /* Cache_hpp */
