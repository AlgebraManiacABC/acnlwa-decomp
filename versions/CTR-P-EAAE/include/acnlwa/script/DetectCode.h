#ifndef ACNLWA_SCRIPT_DETECTCODE_H
#define ACNLWA_SCRIPT_DETECTCODE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class DetectCode : private ::script::MsgEngine {
public:
    virtual ~DetectCode();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_DETECTCODE_H
