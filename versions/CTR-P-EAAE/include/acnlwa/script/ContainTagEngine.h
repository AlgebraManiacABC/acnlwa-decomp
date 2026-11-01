#ifndef ACNLWA_SCRIPT_CONTAINTAGENGINE_H
#define ACNLWA_SCRIPT_CONTAINTAGENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class ContainTagEngine : private ::script::MsgEngine {
public:
    virtual ~ContainTagEngine();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CONTAINTAGENGINE_H
