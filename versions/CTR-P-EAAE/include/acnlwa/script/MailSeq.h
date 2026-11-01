#ifndef ACNLWA_SCRIPT_MAILSEQ_H
#define ACNLWA_SCRIPT_MAILSEQ_H

#include "acnlwa/script/SeqEngine.h"

namespace script {

class MailSeq : public ::script::SeqEngine {
public:
    virtual ~MailSeq();
    virtual void VF02();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_MAILSEQ_H
