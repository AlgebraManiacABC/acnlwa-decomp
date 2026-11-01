#ifndef ACNLWA_SCRIPT_COPYENGINE_H
#define ACNLWA_SCRIPT_COPYENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CopyEngine : private ::script::MsgEngine {
public:
    virtual ~CopyEngine();
    virtual void VF04();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_COPYENGINE_H
