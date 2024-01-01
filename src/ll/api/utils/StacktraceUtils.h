#pragma once

#if _HAS_CXX23
#include <atomic>
#include <stacktrace>
#include <string>

#include "ll/api/base/Macro.h"

struct _CONTEXT; // NOLINT(bugprone-reserved-identifier)

namespace ll::inline utils::stacktrace_utils {
class SymbolLoader {
    void*                     handle;
    static std::atomic_ullong count;

public:
    SymbolLoader(SymbolLoader const&)            = delete;
    SymbolLoader& operator=(SymbolLoader const&) = delete;

    LLAPI SymbolLoader();
    LLAPI SymbolLoader(std::string const&);
    LLAPI ~SymbolLoader();
};

LLNDAPI uintptr_t tryGetSymbolAddress(std::string_view);
LLNDAPI std::string toString(std::stacktrace_entry const&);
LLNDAPI std::string toString(std::stacktrace const&);
LLNDAPI std::string toString(_CONTEXT const&);
} // namespace ll::inline utils::stacktrace_utils

#endif
