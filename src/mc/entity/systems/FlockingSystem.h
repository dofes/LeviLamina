#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlockingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGSYSTEM
public:
    FlockingSystem& operator=(FlockingSystem const&) = delete;
    FlockingSystem(FlockingSystem const&)            = delete;
    FlockingSystem()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@FlockingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
