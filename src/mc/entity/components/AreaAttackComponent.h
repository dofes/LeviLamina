#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AreaAttackComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKCOMPONENT
public:
    AreaAttackComponent& operator=(AreaAttackComponent const&) = delete;
    AreaAttackComponent(AreaAttackComponent const&)            = delete;
    AreaAttackComponent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0AreaAttackComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AreaAttackComponent(class AreaAttackComponent&&);
    /**
     * @symbol ?addAdditionalSaveData\@AreaAttackComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol
     * ?findCooldownEntry\@AreaAttackComponent\@\@QEAAPEAU?$pair\@UActorUniqueID\@\@UTick\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct std::pair<struct ActorUniqueID, struct Tick>* findCooldownEntry(struct ActorUniqueID const&);
    /**
     * @symbol
     * ?isEntryOnAttackCooldown\@AreaAttackComponent\@\@QEBA_NPEBU?$pair\@UActorUniqueID\@\@UTick\@\@\@std\@\@AEBUTick\@\@\@Z
     */
    MCAPI bool
    isEntryOnAttackCooldown(struct std::pair<struct ActorUniqueID, struct Tick> const*, struct Tick const&) const;
    /**
     * @symbol ??4AreaAttackComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AreaAttackComponent& operator=(class AreaAttackComponent&&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@AreaAttackComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ??1AreaAttackComponent\@\@QEAA\@XZ
     */
    MCAPI ~AreaAttackComponent();
};
