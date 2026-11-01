#ifndef ACNLWA_SEARCHNPCBYPRODUCTIDCB_H
#define ACNLWA_SEARCHNPCBYPRODUCTIDCB_H

#include "acnlwa/BsNpcMgr.h"

class SearchNpcByProductIdCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

#endif  // ACNLWA_SEARCHNPCBYPRODUCTIDCB_H
