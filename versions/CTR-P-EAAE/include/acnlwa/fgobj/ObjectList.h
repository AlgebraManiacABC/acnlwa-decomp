#ifndef ACNLWA_FGOBJ_OBJECTLIST_H
#define ACNLWA_FGOBJ_OBJECTLIST_H

#include "acnlwa/ssys/st/ListPriority.h"

namespace fgobj {

class ObjectList : public ::ssys::st::ListPriority {
public:
    virtual ~ObjectList();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTLIST_H
