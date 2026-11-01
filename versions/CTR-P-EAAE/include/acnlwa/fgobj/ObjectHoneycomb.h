#ifndef ACNLWA_FGOBJ_OBJECTHONEYCOMB_H
#define ACNLWA_FGOBJ_OBJECTHONEYCOMB_H

#include "acnlwa/fgobj/ObjectFall.h"

namespace fgobj {

class ObjectHoneycomb : public ::fgobj::ObjectFall {
public:
    virtual ~ObjectHoneycomb();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTHONEYCOMB_H
