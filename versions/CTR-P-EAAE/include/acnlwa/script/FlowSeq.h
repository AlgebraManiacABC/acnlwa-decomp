#ifndef ACNLWA_SCRIPT_FLOWSEQ_H
#define ACNLWA_SCRIPT_FLOWSEQ_H

#include "acnlwa/script/FlowEngine.h"

namespace script {

class FlowSeq : public ::script::FlowEngine {
public:
    virtual ~FlowSeq();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_FLOWSEQ_H
