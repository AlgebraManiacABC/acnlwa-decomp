#ifndef ACNLWA_BUTTONACTIONNODEEX_H
#define ACNLWA_BUTTONACTIONNODEEX_H

#include "acnlwa/ButtonActionNode.h"

class ButtonActionNodeEx : public ::ButtonActionNode {
public:
    virtual ~ButtonActionNodeEx();
    virtual void VF03();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

#endif  // ACNLWA_BUTTONACTIONNODEEX_H
