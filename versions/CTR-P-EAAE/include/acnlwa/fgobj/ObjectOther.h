#ifndef ACNLWA_FGOBJ_OBJECTOTHER_H
#define ACNLWA_FGOBJ_OBJECTOTHER_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectOther : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectOther();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTOTHER_H
