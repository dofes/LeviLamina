#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnderChestBlockActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTBLOCKACTOR
public:
    EnderChestBlockActor& operator=(EnderChestBlockActor const&) = delete;
    EnderChestBlockActor(EnderChestBlockActor const&)            = delete;
    EnderChestBlockActor()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERCHESTBLOCKACTOR
    /**
     * @symbol ?canPullOutItem\@EnderChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;
    /**
     * @symbol ?canPushInItem\@EnderChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;
    /**
     * @symbol
     * ?getName\@EnderChestBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?playCloseSound\@EnderChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource&);
    /**
     * @symbol ?playOpenSound\@EnderChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource&);
#endif
    /**
     * @symbol
     * ??0EnderChestBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI
    EnderChestBlockActor(enum class BlockActorType, std::string const&, enum class BlockActorRendererId, class BlockPos const&);

    // private:

private:
    /**
     * @symbol ?ITEMS_SIZE\@EnderChestBlockActor\@\@0HB
     */
    MCAPI static int const ITEMS_SIZE;
};
