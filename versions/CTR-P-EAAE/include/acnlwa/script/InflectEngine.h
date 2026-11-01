#ifndef ACNLWA_SCRIPT_INFLECTENGINE_H
#define ACNLWA_SCRIPT_INFLECTENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class InflectEngine : private ::script::MsgEngine {
public:
    virtual ~InflectEngine();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_INFLECTENGINE_H
