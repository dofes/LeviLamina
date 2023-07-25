#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BambooFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BAMBOOFEATURE
public:
    BambooFeature& operator=(BambooFeature const&) = delete;
    BambooFeature(BambooFeature const&)            = delete;
    BambooFeature()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@BambooFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};
