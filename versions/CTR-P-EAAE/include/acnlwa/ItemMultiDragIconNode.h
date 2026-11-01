#ifndef ACNLWA_ITEMMULTIDRAGICONNODE_H
#define ACNLWA_ITEMMULTIDRAGICONNODE_H

#include "acnlwa/ItemDragIconNode.h"

class ItemMultiDragIconNode : public ::ItemDragIconNode {
public:
    virtual ~ItemMultiDragIconNode();
    virtual void VF04();
    virtual void VF18();
    virtual void VF21();
    virtual void VF25();
    virtual void VF26();
    virtual void VF29();
};

#endif  // ACNLWA_ITEMMULTIDRAGICONNODE_H
