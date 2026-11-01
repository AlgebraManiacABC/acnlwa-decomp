#ifndef ACNLWA_BUTTONACTIONNODE_H
#define ACNLWA_BUTTONACTIONNODE_H

#include "acnlwa/ssys/st/ListNode.h"

class ButtonActionNode : private ::ssys::st::ListNode {
public:
    virtual ~ButtonActionNode();
    virtual void ButtonActionNode_VF02();
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
    virtual void VF15();
};

#endif  // ACNLWA_BUTTONACTIONNODE_H
