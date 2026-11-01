#ifndef ACNLWA_FGOBJ_OBJECTPLANT_H
#define ACNLWA_FGOBJ_OBJECTPLANT_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectPlant : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectPlant();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTPLANT_H
