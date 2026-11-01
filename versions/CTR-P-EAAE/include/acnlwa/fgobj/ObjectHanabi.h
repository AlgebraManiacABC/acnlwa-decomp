#ifndef ACNLWA_FGOBJ_OBJECTHANABI_H
#define ACNLWA_FGOBJ_OBJECTHANABI_H

#include "acnlwa/fgobj/ObjectThrow.h"

namespace fgobj {

class ObjectHanabi : public ::fgobj::ObjectThrow {
public:
    virtual ~ObjectHanabi();
    virtual void VF05();
    virtual void VF08();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTHANABI_H
