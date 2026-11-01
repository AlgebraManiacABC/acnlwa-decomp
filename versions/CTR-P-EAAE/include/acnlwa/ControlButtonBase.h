#ifndef ACNLWA_CONTROLBUTTONBASE_H
#define ACNLWA_CONTROLBUTTONBASE_H

#include "acnlwa/ButtonActionControl.h"
#include "acnlwa/state/Mode.h"

class ControlButtonBase : public ::ButtonActionControl, public ::state::Mode< ::ControlButtonBase> {
public:
    virtual ~ControlButtonBase();
    virtual void ButtonActionControl_VF02();
};

#endif  // ACNLWA_CONTROLBUTTONBASE_H
