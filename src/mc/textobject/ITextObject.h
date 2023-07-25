#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITextObject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEXTOBJECT
public:
    ITextObject& operator=(ITextObject const&) = delete;
    ITextObject(ITextObject const&)            = delete;
    ITextObject()                              = delete;
#endif

public:
    /**
     * @symbol
     * ?RAW_TEXT_OBJECT_KEY\@ITextObject\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_OBJECT_KEY;
    /**
     * @symbol
     * ?RAW_TEXT_TEXT_KEY\@ITextObject\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_TEXT_KEY;
    /**
     * @symbol
     * ?RAW_TEXT_TRANSLATE_KEY\@ITextObject\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_TRANSLATE_KEY;
    /**
     * @symbol
     * ?RAW_TEXT_WITH_KEY\@ITextObject\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_WITH_KEY;
};
