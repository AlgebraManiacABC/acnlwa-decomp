#ifndef ACNLWA_FGOBJ_OBJECTSCALE_H
#define ACNLWA_FGOBJ_OBJECTSCALE_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectScale : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectScale();
    virtual void VF05();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTSCALE_H
