#ifndef ACNLWA_FGOBJ_OBJECTSTUMPANIM_H
#define ACNLWA_FGOBJ_OBJECTSTUMPANIM_H

#include "acnlwa/fgobj/ObjectStump.h"

namespace fgobj {

class ObjectStumpAnim : public ::fgobj::ObjectStump {
public:
    virtual ~ObjectStumpAnim();
    virtual void VF05();
    virtual void VF08();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTSTUMPANIM_H
