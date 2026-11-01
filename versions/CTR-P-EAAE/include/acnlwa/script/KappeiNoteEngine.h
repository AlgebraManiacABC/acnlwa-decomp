#ifndef ACNLWA_SCRIPT_KAPPEINOTEENGINE_H
#define ACNLWA_SCRIPT_KAPPEINOTEENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class KappeiNoteEngine : private ::script::MsgEngine {
public:
    virtual ~KappeiNoteEngine();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_KAPPEINOTEENGINE_H
