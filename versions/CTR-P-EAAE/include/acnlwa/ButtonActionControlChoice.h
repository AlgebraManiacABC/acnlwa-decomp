#ifndef ACNLWA_BUTTONACTIONCONTROLCHOICE_H
#define ACNLWA_BUTTONACTIONCONTROLCHOICE_H

#include "acnlwa/ButtonActionControl.h"

class ButtonActionControlChoice : public ::ButtonActionControl {
public:
    virtual ~ButtonActionControlChoice();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
};

#endif  // ACNLWA_BUTTONACTIONCONTROLCHOICE_H
