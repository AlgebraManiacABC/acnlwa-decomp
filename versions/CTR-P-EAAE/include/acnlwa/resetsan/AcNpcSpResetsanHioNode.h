#ifndef ACNLWA_RESETSAN_ACNPCSPRESETSANHIONODE_H
#define ACNLWA_RESETSAN_ACNPCSPRESETSANHIONODE_H

#include "acnlwa/AcNpcSp.h"

namespace resetsan {

class AcNpcSpResetsanHioNode : public ::AcNpcSp::AcNpcSpHioNode {
public:
    virtual void VF00();
};

}  // namespace resetsan

#endif  // ACNLWA_RESETSAN_ACNPCSPRESETSANHIONODE_H
