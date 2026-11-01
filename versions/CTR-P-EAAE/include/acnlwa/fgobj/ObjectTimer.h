#ifndef ACNLWA_FGOBJ_OBJECTTIMER_H
#define ACNLWA_FGOBJ_OBJECTTIMER_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectTimer : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectTimer();
    virtual void VF04();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTTIMER_H
