#ifndef ACNLWA_SCRIPT_CHOICESTANDARDITEM_H
#define ACNLWA_SCRIPT_CHOICESTANDARDITEM_H

#include "acnlwa/script/ChoiceStandard.h"

namespace script {

class ChoiceStandardItem : public ::script::ChoiceStandard {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF04();
    virtual void VF06();
    virtual ~ChoiceStandardItem();
    virtual void VF09();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CHOICESTANDARDITEM_H
