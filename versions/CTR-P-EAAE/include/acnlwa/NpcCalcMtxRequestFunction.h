#ifndef ACNLWA_NPCCALCMTXREQUESTFUNCTION_H
#define ACNLWA_NPCCALCMTXREQUESTFUNCTION_H

#include "acnlwa/BsNpcMgr.h"

class NpcCalcMtxRequestFunction : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

#endif  // ACNLWA_NPCCALCMTXREQUESTFUNCTION_H
