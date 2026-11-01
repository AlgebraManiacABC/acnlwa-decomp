#ifndef ACNLWA_BUTTONACTIONCONTROL_H
#define ACNLWA_BUTTONACTIONCONTROL_H

#include "acnlwa/ssys/st/List.h"

class ButtonActionControl : public ::ssys::st::List {
public:
    virtual ~ButtonActionControl();
    virtual void ButtonActionControl_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
};

#endif  // ACNLWA_BUTTONACTIONCONTROL_H
