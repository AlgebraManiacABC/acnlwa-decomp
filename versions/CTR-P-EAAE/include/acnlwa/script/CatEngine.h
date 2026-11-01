#ifndef ACNLWA_SCRIPT_CATENGINE_H
#define ACNLWA_SCRIPT_CATENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CatEngine : private ::script::MsgEngine {
public:
    virtual ~CatEngine();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CATENGINE_H
