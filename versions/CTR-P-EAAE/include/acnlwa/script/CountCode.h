#ifndef ACNLWA_SCRIPT_COUNTCODE_H
#define ACNLWA_SCRIPT_COUNTCODE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CountCode : private ::script::MsgEngine {
public:
    virtual ~CountCode();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_COUNTCODE_H
