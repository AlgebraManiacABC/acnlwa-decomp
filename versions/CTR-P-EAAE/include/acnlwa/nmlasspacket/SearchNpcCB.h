#ifndef ACNLWA_NMLASSPACKET_SEARCHNPCCB_H
#define ACNLWA_NMLASSPACKET_SEARCHNPCCB_H

#include "acnlwa/BsNpcMgr.h"

namespace nmlasspacket {

class SearchNpcCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

}  // namespace nmlasspacket

#endif  // ACNLWA_NMLASSPACKET_SEARCHNPCCB_H
