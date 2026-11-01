#ifndef ACNLWA_SCRIPT_RENDERMAIN_H
#define ACNLWA_SCRIPT_RENDERMAIN_H

#include "acnlwa/script/RenderBase.h"

namespace script {

class RenderMain : public ::script::RenderBase {
public:
    virtual ~RenderMain();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_RENDERMAIN_H
