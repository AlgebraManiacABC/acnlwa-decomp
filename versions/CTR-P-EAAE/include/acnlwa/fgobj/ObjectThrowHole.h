#ifndef ACNLWA_FGOBJ_OBJECTTHROWHOLE_H
#define ACNLWA_FGOBJ_OBJECTTHROWHOLE_H

#include "acnlwa/fgobj/ObjectMove.h"

namespace fgobj {

class ObjectThrowHole : public ::fgobj::ObjectMove {
public:
    virtual ~ObjectThrowHole();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTTHROWHOLE_H
