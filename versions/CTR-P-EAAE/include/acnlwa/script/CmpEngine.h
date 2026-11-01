#ifndef ACNLWA_SCRIPT_CMPENGINE_H
#define ACNLWA_SCRIPT_CMPENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CmpEngine : private ::script::MsgEngine {
public:
    virtual ~CmpEngine();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CMPENGINE_H
