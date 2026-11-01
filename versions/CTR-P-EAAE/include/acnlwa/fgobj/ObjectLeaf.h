#ifndef ACNLWA_FGOBJ_OBJECTLEAF_H
#define ACNLWA_FGOBJ_OBJECTLEAF_H

#include "acnlwa/fgobj/ObjectFall.h"

namespace fgobj {

class ObjectLeaf : public ::fgobj::ObjectFall {
public:
    virtual ~ObjectLeaf();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTLEAF_H
