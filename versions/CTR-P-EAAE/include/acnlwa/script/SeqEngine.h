#ifndef ACNLWA_SCRIPT_SEQENGINE_H
#define ACNLWA_SCRIPT_SEQENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class SeqEngine : public ::script::MsgEngine {
public:
    virtual ~SeqEngine();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_SEQENGINE_H
