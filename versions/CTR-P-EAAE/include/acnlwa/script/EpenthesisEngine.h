#ifndef ACNLWA_SCRIPT_EPENTHESISENGINE_H
#define ACNLWA_SCRIPT_EPENTHESISENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class EpenthesisEngine : private ::script::MsgEngine {
public:
    virtual ~EpenthesisEngine();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_EPENTHESISENGINE_H
