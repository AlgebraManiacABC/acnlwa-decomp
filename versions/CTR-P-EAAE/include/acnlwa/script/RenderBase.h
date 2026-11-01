#ifndef ACNLWA_SCRIPT_RENDERBASE_H
#define ACNLWA_SCRIPT_RENDERBASE_H

#include "acnlwa/nw/font/TagProcessorBase.h"

namespace script {

class RenderBase : public ::nw::font::TagProcessorBase<wchar_t> {
public:
    virtual ~RenderBase();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_RENDERBASE_H
