#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKCOMPONENT
public:
    PlayerTickComponent& operator=(PlayerTickComponent const&) = delete;
    PlayerTickComponent(PlayerTickComponent const&)            = delete;
    PlayerTickComponent()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ??0PlayerTickComponent\@\@QEAA\@V?$unique_ptr\@UIPlayerTickPolicy\@\@U?$default_delete\@UIPlayerTickPolicy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerTickComponent(std::unique_ptr<struct IPlayerTickPolicy>);
    /**
     * @symbol ??0PlayerTickComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PlayerTickComponent(struct PlayerTickComponent&&);
    /**
     * @symbol ??4PlayerTickComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PlayerTickComponent& operator=(struct PlayerTickComponent&&);
    /**
     * @symbol ??1PlayerTickComponent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerTickComponent();
};
