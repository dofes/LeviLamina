#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsSkinIDTest : public ::FilterTest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISSKINIDTEST
public:
    ActorIsSkinIDTest& operator=(ActorIsSkinIDTest const&) = delete;
    ActorIsSkinIDTest(ActorIsSkinIDTest const&)            = delete;
    ActorIsSkinIDTest()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorIsSkinIDTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorIsSkinIDTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORISSKINIDTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorIsSkinIDTest();
#endif
};
