#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct AttachableDecoration; }
namespace TreeHelper { struct TreeParams; }
// clang-format on

namespace TreeHelper {
/**
 * @symbol ?isValidTreePosition\@TreeHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBUTreeParams\@1\@\@Z
 */
MCAPI bool
isValidTreePosition(class IBlockWorldGenAPI const&, class BlockPos const&, struct TreeHelper::TreeParams const&);
/**
 * @symbol ?isValidTreePosition\@TreeHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI bool isValidTreePosition(class IBlockWorldGenAPI const&, class BlockPos const&);
/**
 * @symbol
 * ?placeBaseBlock\@TreeHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@3\@\@Z
 */
MCAPI class std::optional<class BlockPos>
placeBaseBlock(class IBlockWorldGenAPI&, class BlockPos const&, std::vector<class BlockDescriptor> const&);
/**
 * @symbol
 * ?placeDecoratedBlock\@TreeHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBVBlock\@\@AEBUAttachableDecoration\@1\@AEBUDirectionMask\@81\@\@Z
 */
MCAPI class std::optional<class BlockPos>
placeDecoratedBlock(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class Block const&, struct TreeHelper::AttachableDecoration const&, struct TreeHelper::AttachableDecoration::DirectionMask const&);
/**
 * @symbol
 * ?placeRadialBlockGroup\@TreeHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBVBlock\@\@HH_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@3\@\@Z
 */
MCAPI class std::optional<class BlockPos>
placeRadialBlockGroup(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class Block const&, int, int, bool, std::vector<class BlockDescriptor> const&);
/**
 * @symbol
 * ?prepareSpawn\@TreeHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@2\@Z
 */
MCAPI bool
prepareSpawn(class IBlockWorldGenAPI const&, class BlockPos const&, int, std::vector<class BlockDescriptor> const&, std::vector<class BlockDescriptor> const&);

}; // namespace TreeHelper
