#ifndef ACNLWA_SCRIPT_CHOICESEQ_H
#define ACNLWA_SCRIPT_CHOICESEQ_H

#include "acnlwa/script/SeqEngine.h"

namespace script {

class ChoiceSeq : public ::script::SeqEngine {
public:
    virtual ~ChoiceSeq();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CHOICESEQ_H
