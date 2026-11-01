#ifndef ACNLWA_SCRIPT_CHOICESTANDARD_H
#define ACNLWA_SCRIPT_CHOICESTANDARD_H

#include "acnlwa/script/ChoiceBase.h"

namespace script {

class ChoiceStandard : public ::script::ChoiceBase {
public:
    virtual void VF00() = 0;
    virtual void VF01() = 0;
    virtual void VF02(unsigned int, unsigned int, unsigned int);
    virtual bool VF03();
    virtual void VF04() = 0;
    virtual void VF05();
    virtual void VF06() = 0;
    virtual ~ChoiceStandard();
    virtual void VF09() = 0;
    virtual void VF10();
    virtual void VF11(unsigned char);
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CHOICESTANDARD_H
