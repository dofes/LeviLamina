#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementAmphibiousComponentFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENTFACTORY
public:
    ScriptMovementAmphibiousComponentFactory& operator=(ScriptMovementAmphibiousComponentFactory const&) = delete;
    ScriptMovementAmphibiousComponentFactory(ScriptMovementAmphibiousComponentFactory const&)            = delete;
    ScriptMovementAmphibiousComponentFactory()                                                           = delete;
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
     * ?createComponent\@ScriptMovementAmphibiousComponentFactory\@ScriptModuleMinecraft\@\@UEAA?AV?$StrongTypedObjectHandle\@VScriptActorComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@VWeakEntityRef\@\@AEBVWeakLifetimeScope\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol
     * ?hasComponent\@ScriptMovementAmphibiousComponentFactory\@ScriptModuleMinecraft\@\@UEBA_NVWeakEntityRef\@\@\@Z
     */
    virtual bool hasComponent(class WeakEntityRef) const;
};

}; // namespace ScriptModuleMinecraft
