#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PeekDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PEEKDEFINITION
public:
    PeekDefinition& operator=(PeekDefinition const&) = delete;
    PeekDefinition(PeekDefinition const&)            = delete;
    PeekDefinition()                                 = delete;
#endif

public:
    /**
     * @symbol ?initialize\@PeekDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@PeekDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VPeekDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PeekDefinition>>&);
};
