#ifndef ACNLWA_SCRIPT_UISEQ_H
#define ACNLWA_SCRIPT_UISEQ_H

#include "acnlwa/script/SeqEngine.h"

namespace script {

class UiSeq : public ::script::SeqEngine {
public:
    virtual ~UiSeq();
    virtual void VF02();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_UISEQ_H
