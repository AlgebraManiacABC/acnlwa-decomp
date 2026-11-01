#ifndef ACNLWA_FGOBJ_OBJECTSTUMP_H
#define ACNLWA_FGOBJ_OBJECTSTUMP_H

#include "acnlwa/fgobj/ObjectMove.h"

namespace fgobj {

class ObjectStump : public ::fgobj::ObjectMove {
public:
    virtual ~ObjectStump();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTSTUMP_H
