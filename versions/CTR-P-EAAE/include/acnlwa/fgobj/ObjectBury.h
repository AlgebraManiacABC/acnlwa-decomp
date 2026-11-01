#ifndef ACNLWA_FGOBJ_OBJECTBURY_H
#define ACNLWA_FGOBJ_OBJECTBURY_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectBury : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectBury();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTBURY_H
