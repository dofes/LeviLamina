#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class StompBlockGoal : public ::BaseMoveToGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPBLOCKGOAL
public:
    StompBlockGoal& operator=(StompBlockGoal const&) = delete;
    StompBlockGoal(StompBlockGoal const&)            = delete;
    StompBlockGoal()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@StompBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@StompBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@StompBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@StompBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@StompBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@StompBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@StompBlockGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 13
     * @symbol ?_canReach\@StompBlockGoal\@\@MEAA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool _canReach(class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@StompBlockGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@StompBlockGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @vftbl 18
     * @symbol ?_createBreakProgressParticles\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);
    /**
     * @vftbl 19
     * @symbol ?_createDestroyParticles\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);
    /**
     * @vftbl 20
     * @symbol ?_playBreakProgressSound\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);
    /**
     * @vftbl 21
     * @symbol ?_playDestroySound\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);
};
