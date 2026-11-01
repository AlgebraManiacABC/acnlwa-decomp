#ifndef ACNLWA_TOOLBUTTONNODE_H
#define ACNLWA_TOOLBUTTONNODE_H

#include "acnlwa/ButtonActionNode.h"
#include "acnlwa/state/Mode.h"

class ToolButtonNode : public ::ButtonActionNode, public ::state::Mode< ::ToolButtonNode> {
public:
    virtual ~ToolButtonNode();
};

#endif  // ACNLWA_TOOLBUTTONNODE_H
