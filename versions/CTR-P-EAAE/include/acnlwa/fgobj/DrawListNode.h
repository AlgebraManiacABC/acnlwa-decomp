#ifndef ACNLWA_FGOBJ_DRAWLISTNODE_H
#define ACNLWA_FGOBJ_DRAWLISTNODE_H

#include "acnlwa/ssys/st/ListNode.h"

namespace fgobj {

class DrawListNode : public ::ssys::st::ListNode {
public:
    virtual ~DrawListNode();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_DRAWLISTNODE_H
