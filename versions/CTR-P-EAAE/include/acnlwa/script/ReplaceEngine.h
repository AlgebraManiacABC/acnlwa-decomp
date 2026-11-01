#ifndef ACNLWA_SCRIPT_REPLACEENGINE_H
#define ACNLWA_SCRIPT_REPLACEENGINE_H

#include "acnlwa/script/MsgEngineModify.h"

namespace script {

class ReplaceEngine : private ::script::MsgEngineModify {
public:
    virtual ~ReplaceEngine();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_REPLACEENGINE_H
