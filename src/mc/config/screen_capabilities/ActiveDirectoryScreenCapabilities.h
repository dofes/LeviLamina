#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct ActiveDirectoryScreenCapabilities {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVEDIRECTORYSCREENCAPABILITIES
public:
    ActiveDirectoryScreenCapabilities& operator=(ActiveDirectoryScreenCapabilities const&) = delete;
    ActiveDirectoryScreenCapabilities(ActiveDirectoryScreenCapabilities const&)            = delete;
    ActiveDirectoryScreenCapabilities()                                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@UActiveDirectoryScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTIVEDIRECTORYSCREENCAPABILITIES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActiveDirectoryScreenCapabilities();
#endif
};
