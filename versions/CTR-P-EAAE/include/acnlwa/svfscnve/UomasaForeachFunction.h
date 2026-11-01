#ifndef ACNLWA_SVFSCNVE_UOMASAFOREACHFUNCTION_H
#define ACNLWA_SVFSCNVE_UOMASAFOREACHFUNCTION_H

#include "acnlwa/BsNpcMgr.h"

namespace svfscnve {

class UomasaForeachFunction : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

}  // namespace svfscnve

#endif  // ACNLWA_SVFSCNVE_UOMASAFOREACHFUNCTION_H
