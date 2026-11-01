#ifndef ACNLWA_OTHERNPCSEARCHCB_H
#define ACNLWA_OTHERNPCSEARCHCB_H

#include "acnlwa/BsNpcMgr.h"

class OtherNpcSearchCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

#endif  // ACNLWA_OTHERNPCSEARCHCB_H
