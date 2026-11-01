#ifndef ACNLWA_DRAGICONCONTROL_H
#define ACNLWA_DRAGICONCONTROL_H

#include "acnlwa/ButtonActionControl.h"

class DragIconControl : public ::ButtonActionControl {
public:
    virtual ~DragIconControl();
    virtual void ButtonActionControl_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF08();
    virtual void VF09();
    virtual void VF11();
    virtual void VF13();
    virtual void VF14();
};

#endif  // ACNLWA_DRAGICONCONTROL_H
