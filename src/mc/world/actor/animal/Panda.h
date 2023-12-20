#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Panda : public ::Animal {
public:
    // prevent constructor by default
    Panda& operator=(Panda const&);
    Panda(Panda const&);
    Panda();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Panda@@UEAA@XZ
    virtual ~Panda() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 77, symbol: ?getAmbientSound@Panda@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@Panda@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 202, symbol: ?setTransitioningSitting@Panda@@UEAAX_N@Z
    virtual void setTransitioningSitting(bool);

    // symbol: ??0Panda@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Panda(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getLieOnBackAmount@Panda@@QEBAMM@Z
    MCAPI float getLieOnBackAmount(float) const;

    // symbol: ?getSitAmount@Panda@@QEBAMM@Z
    MCAPI float getSitAmount(float) const;

    // symbol: ?getSneezeCounter@Panda@@QEBAHXZ
    MCAPI int getSneezeCounter() const;

    // symbol: ?getUnhappyCounter@Panda@@QEBAHXZ
    MCAPI int getUnhappyCounter() const;

    // symbol: ?postNormalTick@Panda@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?updateLaying@Panda@@QEAAXXZ
    MCAPI void updateLaying();

    // symbol: ?updateSitting@Panda@@QEAAXXZ
    MCAPI void updateSitting();

    // NOLINTEND
};
