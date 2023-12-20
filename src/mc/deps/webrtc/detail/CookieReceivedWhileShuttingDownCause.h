#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class CookieReceivedWhileShuttingDownCause {
public:
    // prevent constructor by default
    CookieReceivedWhileShuttingDownCause& operator=(CookieReceivedWhileShuttingDownCause const&);
    CookieReceivedWhileShuttingDownCause(CookieReceivedWhileShuttingDownCause const&);
    CookieReceivedWhileShuttingDownCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CookieReceivedWhileShuttingDownCause@dcsctp@@UEAA@XZ
    virtual ~CookieReceivedWhileShuttingDownCause() = default;

    // vIndex: 1, symbol:
    // ?SerializeTo@CookieReceivedWhileShuttingDownCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@CookieReceivedWhileShuttingDownCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@CookieReceivedWhileShuttingDownCause@dcsctp@@SA?AV?$optional@VCookieReceivedWhileShuttingDownCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::CookieReceivedWhileShuttingDownCause>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
