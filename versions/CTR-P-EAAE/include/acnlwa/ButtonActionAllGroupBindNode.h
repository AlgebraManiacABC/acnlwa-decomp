#ifndef ACNLWA_BUTTONACTIONALLGROUPBINDNODE_H
#define ACNLWA_BUTTONACTIONALLGROUPBINDNODE_H

#include "acnlwa/ButtonActionNode.h"

class ButtonActionAllGroupBindNode : public ::ButtonActionNode {
public:
    virtual ~ButtonActionAllGroupBindNode();
    virtual void VF03();
    virtual void VF07();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

#endif  // ACNLWA_BUTTONACTIONALLGROUPBINDNODE_H
