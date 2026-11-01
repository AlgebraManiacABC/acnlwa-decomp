#ifndef ACNLWA_DRAGICONNODE_H
#define ACNLWA_DRAGICONNODE_H

#include "acnlwa/ButtonActionNode.h"

class DragIconNode : public ::ButtonActionNode {
public:
    virtual ~DragIconNode();
    virtual void ButtonActionNode_VF02();
    virtual void VF04();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
    virtual void VF27();
    virtual void VF28();
};

#endif  // ACNLWA_DRAGICONNODE_H
