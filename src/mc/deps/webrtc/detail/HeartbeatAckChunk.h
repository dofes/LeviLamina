#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class HeartbeatAckChunk {
public:
    // prevent constructor by default
    HeartbeatAckChunk& operator=(HeartbeatAckChunk const&);
    HeartbeatAckChunk(HeartbeatAckChunk const&);
    HeartbeatAckChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HeartbeatAckChunk@dcsctp@@UEAA@XZ
    virtual ~HeartbeatAckChunk();

    // vIndex: 1, symbol: ?SerializeTo@HeartbeatAckChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@HeartbeatAckChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@HeartbeatAckChunk@dcsctp@@SA?AV?$optional@VHeartbeatAckChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::HeartbeatAckChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
