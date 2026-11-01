#ifndef ACNLWA_SCRIPT_COUNTRETURN_H
#define ACNLWA_SCRIPT_COUNTRETURN_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CountReturn : private ::script::MsgEngine {
public:
    virtual ~CountReturn();
    virtual void VF05();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_COUNTRETURN_H
