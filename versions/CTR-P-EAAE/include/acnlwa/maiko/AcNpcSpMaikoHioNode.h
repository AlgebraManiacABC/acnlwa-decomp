#ifndef ACNLWA_MAIKO_ACNPCSPMAIKOHIONODE_H
#define ACNLWA_MAIKO_ACNPCSPMAIKOHIONODE_H

#include "acnlwa/AcNpcSp.h"

namespace maiko {

class AcNpcSpMaikoHioNode : public ::AcNpcSp::AcNpcSpHioNode {
public:
    virtual void VF00();
};

}  // namespace maiko

#endif  // ACNLWA_MAIKO_ACNPCSPMAIKOHIONODE_H
