#ifndef ACNLWA_PROBUTTONNODE_H
#define ACNLWA_PROBUTTONNODE_H

#include "acnlwa/ButtonActionNode.h"
#include "acnlwa/state/Mode.h"

class ProButtonNode : public ::ButtonActionNode, public ::state::Mode< ::ProButtonNode> {
public:
    virtual ~ProButtonNode();
    virtual void VF16();
};

#endif  // ACNLWA_PROBUTTONNODE_H
