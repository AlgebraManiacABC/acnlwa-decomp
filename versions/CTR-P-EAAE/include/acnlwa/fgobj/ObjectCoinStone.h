#ifndef ACNLWA_FGOBJ_OBJECTCOINSTONE_H
#define ACNLWA_FGOBJ_OBJECTCOINSTONE_H

#include "acnlwa/fgobj/ObjectExe.h"

namespace fgobj {

class ObjectCoinStone : public ::fgobj::ObjectExe {
public:
    virtual ~ObjectCoinStone();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTCOINSTONE_H
