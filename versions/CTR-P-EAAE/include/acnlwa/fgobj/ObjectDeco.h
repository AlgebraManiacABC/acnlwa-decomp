#ifndef ACNLWA_FGOBJ_OBJECTDECO_H
#define ACNLWA_FGOBJ_OBJECTDECO_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectDeco : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectDeco();
    virtual void VF04();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTDECO_H
