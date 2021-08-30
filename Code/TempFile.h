//
//  TempFile.h
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-11-13.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef TempFile_h
#define TempFile_h

#include <string>
#include "StrongTypeDefModules.h"

namespace traffictrack {
    
    /**   @class TempFile
     *    @brief abstract class - strong type for TempFile to prevent ambiguity
     *    @author Matthew Lovick
     */
    class TempFile : public StrongTypes::StrongTypeDefBase<std::string>, StrongTypes::Addable<TempFile>, StrongTypes::Comparable<TempFile>, StrongTypes::Outputtable<TempFile>, StrongTypes::Inputtable<TempFile> {
        
    public:
        using StrongTypeDefBase::StrongTypeDefBase;
        void operator = (const std::string& val) {
            ref() = val;
        }
        
    };
    
}

#endif /* TempFile_h */
