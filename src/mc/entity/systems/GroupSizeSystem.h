#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroupSizeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUPSIZESYSTEM
public:
    GroupSizeSystem& operator=(GroupSizeSystem const&) = delete;
    GroupSizeSystem(GroupSizeSystem const&)            = delete;
    GroupSizeSystem()                                  = delete;
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
     * @symbol ?tick\@GroupSizeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@GroupSizeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGroupSizeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class GroupSizeComponent&);

private:
};
