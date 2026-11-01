#ifndef ACNLWA_NPCUTIL_NPCSEARCHCB_H
#define ACNLWA_NPCUTIL_NPCSEARCHCB_H

#include "acnlwa/BsNpcMgr.h"

namespace npcutil {

class NpcSearchCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

}  // namespace npcutil

#endif  // ACNLWA_NPCUTIL_NPCSEARCHCB_H
