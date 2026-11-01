#ifndef ACNLWA_SCRIPT_INSERTENGINE_H
#define ACNLWA_SCRIPT_INSERTENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class InsertEngine : public ::script::MsgEngine {
public:
    virtual ~InsertEngine();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_INSERTENGINE_H
