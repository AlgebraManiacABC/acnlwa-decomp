#ifndef ACNLWA_SCRIPT_COPYREPELTAGENGINE_H
#define ACNLWA_SCRIPT_COPYREPELTAGENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CopyRepelTagEngine : private ::script::MsgEngine {
public:
    virtual ~CopyRepelTagEngine();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_COPYREPELTAGENGINE_H
