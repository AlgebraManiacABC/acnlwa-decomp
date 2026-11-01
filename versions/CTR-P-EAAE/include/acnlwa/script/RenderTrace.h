#ifndef ACNLWA_SCRIPT_RENDERTRACE_H
#define ACNLWA_SCRIPT_RENDERTRACE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class RenderTrace : public ::script::MsgEngine {
public:
    virtual ~RenderTrace();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_RENDERTRACE_H
