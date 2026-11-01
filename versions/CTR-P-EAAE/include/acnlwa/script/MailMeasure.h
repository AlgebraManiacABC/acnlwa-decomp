#ifndef ACNLWA_SCRIPT_MAILMEASURE_H
#define ACNLWA_SCRIPT_MAILMEASURE_H

#include "acnlwa/script/SeqEngine.h"
#include "acnlwa/script/IMeasure.h"

namespace script {

class MailMeasure : public ::script::SeqEngine, public ::script::IMeasure {
public:
    virtual ~MailMeasure();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_MAILMEASURE_H
