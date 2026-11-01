#ifndef ACNLWA_FGOBJ_OBJECTTHROW_H
#define ACNLWA_FGOBJ_OBJECTTHROW_H

#include "acnlwa/fgobj/ObjectMove.h"

namespace fgobj {

class ObjectThrow : public ::fgobj::ObjectMove {
public:
    virtual ~ObjectThrow();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTTHROW_H
