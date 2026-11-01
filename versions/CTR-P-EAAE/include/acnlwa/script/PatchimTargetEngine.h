#ifndef ACNLWA_SCRIPT_PATCHIMTARGETENGINE_H
#define ACNLWA_SCRIPT_PATCHIMTARGETENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class PatchimTargetEngine : private ::script::MsgEngine {
public:
    virtual ~PatchimTargetEngine();
    virtual void VF05();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_PATCHIMTARGETENGINE_H
