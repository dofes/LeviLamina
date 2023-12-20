#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

class ClientboundMapItemDataPacket : public ::Packet {
public:
    // ClientboundMapItemDataPacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ClientboundMapItemDataPacket& operator=(ClientboundMapItemDataPacket const&);
    ClientboundMapItemDataPacket(ClientboundMapItemDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ClientboundMapItemDataPacket@@UEAA@XZ
    virtual ~ClientboundMapItemDataPacket();

    // vIndex: 1, symbol: ?getId@ClientboundMapItemDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientboundMapItemDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientboundMapItemDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ClientboundMapItemDataPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ClientboundMapItemDataPacket@@QEAA@XZ
    MCAPI ClientboundMapItemDataPacket();

    // symbol: ??0ClientboundMapItemDataPacket@@QEAA@V?$not_null@PEAVMapItemSavedData@@@gsl@@AEAVLevel@@@Z
    MCAPI ClientboundMapItemDataPacket(gsl::not_null<class MapItemSavedData*>, class Level&);

    // symbol:
    // ??0ClientboundMapItemDataPacket@@QEAA@UActorUniqueID@@CAEBV?$vector@U?$pair@UUniqueId@MapItemTrackedActor@@V?$shared_ptr@VMapDecoration@@@std@@@std@@V?$allocator@U?$pair@UUniqueId@MapItemTrackedActor@@V?$shared_ptr@VMapDecoration@@@std@@@std@@@2@@std@@V?$buffer_span@I@@HHHHV?$AutomaticID@VDimension@@H@@_NAEBVBlockPos@@@Z
    MCAPI
    ClientboundMapItemDataPacket(struct ActorUniqueID, schar, std::vector<std::pair<struct MapItemTrackedActor::UniqueId, std::shared_ptr<class MapDecoration>>> const&, class buffer_span<uint>, int, int, int, int, DimensionType, bool, class BlockPos const&);

    // NOLINTEND
};
