#ifndef ACNLWA_FGOBJ_OBJECTPRESENT_H
#define ACNLWA_FGOBJ_OBJECTPRESENT_H

#include "acnlwa/fgobj/ObjectMove.h"

namespace fgobj {

class ObjectPresent : public ::fgobj::ObjectMove {
public:
    virtual ~ObjectPresent();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTPRESENT_H
