#ifndef ACNLWA_SCRIPT_CAPITALTOPENGINE_H
#define ACNLWA_SCRIPT_CAPITALTOPENGINE_H

#include "acnlwa/script/MsgEngineModify.h"

namespace script {

class CapitalTopEngine : private ::script::MsgEngineModify {
public:
    virtual ~CapitalTopEngine();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CAPITALTOPENGINE_H
