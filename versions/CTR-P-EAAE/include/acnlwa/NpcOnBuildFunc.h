#ifndef ACNLWA_NPCONBUILDFUNC_H
#define ACNLWA_NPCONBUILDFUNC_H

#include "acnlwa/BsNpcMgr.h"

class NpcOnBuildFunc : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

#endif  // ACNLWA_NPCONBUILDFUNC_H
