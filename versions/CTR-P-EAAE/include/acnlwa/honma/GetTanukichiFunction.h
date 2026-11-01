#ifndef ACNLWA_HONMA_GETTANUKICHIFUNCTION_H
#define ACNLWA_HONMA_GETTANUKICHIFUNCTION_H

#include "acnlwa/BsNpcMgr.h"

namespace honma {

class GetTanukichiFunction : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

}  // namespace honma

#endif  // ACNLWA_HONMA_GETTANUKICHIFUNCTION_H
