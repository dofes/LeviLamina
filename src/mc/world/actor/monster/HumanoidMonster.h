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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HumanoidMonster : public ::Monster {
public:
    // prevent constructor by default
    HumanoidMonster& operator=(HumanoidMonster const&);
    HumanoidMonster(HumanoidMonster const&);
    HumanoidMonster();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ??1HumanoidMonster@@UEAA@XZ
    virtual ~HumanoidMonster();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@HumanoidMonster@@UEAAXXZ
    virtual void normalTick();

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

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@HumanoidMonster@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 165, symbol: ?addAdditionalSaveData@HumanoidMonster@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 181, symbol: ?getItemUseDuration@HumanoidMonster@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 186, symbol: ?doHurtTarget@HumanoidMonster@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor*, ::ActorDamageCause const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_ENCHANTED_ARMOR_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_ENCHANTED_ARMOR_CHANCE;

    // symbol: ?MAX_ENCHANTED_WEAPON_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_ENCHANTED_WEAPON_CHANCE;

    // symbol: ?MAX_PICKUP_LOOT_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_PICKUP_LOOT_CHANCE;

    // symbol: ?MAX_WEARING_ARMOR_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_WEARING_ARMOR_CHANCE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MAX_ENCHANTED_ARMOR_CHANCE() { return MAX_ENCHANTED_ARMOR_CHANCE; }

    static auto& $MAX_ENCHANTED_WEAPON_CHANCE() { return MAX_ENCHANTED_WEAPON_CHANCE; }

    static auto& $MAX_PICKUP_LOOT_CHANCE() { return MAX_PICKUP_LOOT_CHANCE; }

    static auto& $MAX_WEARING_ARMOR_CHANCE() { return MAX_WEARING_ARMOR_CHANCE; }

    // NOLINTEND
};
