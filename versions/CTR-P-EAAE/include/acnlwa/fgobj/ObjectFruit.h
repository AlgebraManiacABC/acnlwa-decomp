#ifndef ACNLWA_FGOBJ_OBJECTFRUIT_H
#define ACNLWA_FGOBJ_OBJECTFRUIT_H

#include "acnlwa/fgobj/ObjectFall.h"

namespace fgobj {

class ObjectFruit : public ::fgobj::ObjectFall {
public:
    virtual ~ObjectFruit();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTFRUIT_H
