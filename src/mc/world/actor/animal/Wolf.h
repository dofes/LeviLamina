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

class Wolf : public ::Animal {
public:
    // prevent constructor by default
    Wolf& operator=(Wolf const&);
    Wolf(Wolf const&);
    Wolf();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Wolf@@UEAA@XZ
    virtual ~Wolf() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 33, symbol: ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
    virtual void addPassenger(class Actor&);

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

    // vIndex: 69, symbol: ?setSitting@Wolf@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 77, symbol: ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 83, symbol: ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 98, symbol: ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 112, symbol: ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 185, symbol: ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
    virtual bool isAlliedTo(class Mob*);

    // vIndex: 200, symbol: ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
    virtual void onBorn(class Actor&, class Actor&);

    // vIndex: 207, symbol: ?newServerAiStep@Wolf@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0Wolf@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Wolf(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getHeadRollAngle@Wolf@@QEAAMM@Z
    MCAPI float getHeadRollAngle(float);

    // symbol: ?getShakeAnim@Wolf@@QEBAMXZ
    MCAPI float getShakeAnim() const;

    // symbol: ?getTailAngle@Wolf@@QEAAMXZ
    MCAPI float getTailAngle();

    // symbol: ?isShaking@Wolf@@QEBA_NXZ
    MCAPI bool isShaking() const;

    // symbol: ?postNormalTick@Wolf@@QEAAXXZ
    MCAPI void postNormalTick();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_avoidSnowBury@Wolf@@AEAAXXZ
    MCAPI void _avoidSnowBury();

    // NOLINTEND
};
