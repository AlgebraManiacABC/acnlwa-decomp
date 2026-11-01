#ifndef ACNLWA_SCRIPT_ELISIONENGINE_H
#define ACNLWA_SCRIPT_ELISIONENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class ElisionEngine : private ::script::MsgEngine {
public:
    virtual ~ElisionEngine();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_ELISIONENGINE_H
