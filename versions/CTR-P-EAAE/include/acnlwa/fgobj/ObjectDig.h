#ifndef ACNLWA_FGOBJ_OBJECTDIG_H
#define ACNLWA_FGOBJ_OBJECTDIG_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectDig : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectDig();
    virtual void VF05();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTDIG_H
