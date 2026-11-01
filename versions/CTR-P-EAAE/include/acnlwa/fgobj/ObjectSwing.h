#ifndef ACNLWA_FGOBJ_OBJECTSWING_H
#define ACNLWA_FGOBJ_OBJECTSWING_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectSwing : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectSwing();
    virtual void VF04();
    virtual void VF05();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTSWING_H
