#ifndef ACNLWA_ITEMDRAGICONNODE_H
#define ACNLWA_ITEMDRAGICONNODE_H

#include "acnlwa/DragIconNode.h"

class ItemDragIconNode : public ::DragIconNode {
public:
    virtual ~ItemDragIconNode();
    virtual void VF04();
    virtual void VF20();
    virtual void VF29();
};

#endif  // ACNLWA_ITEMDRAGICONNODE_H
