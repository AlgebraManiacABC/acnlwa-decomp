#ifndef ACNLWA_GETVISITNPCIDXCB_H
#define ACNLWA_GETVISITNPCIDXCB_H

#include "acnlwa/BsNpcMgr.h"

class GetVisitNpcIdxCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

#endif  // ACNLWA_GETVISITNPCIDXCB_H
