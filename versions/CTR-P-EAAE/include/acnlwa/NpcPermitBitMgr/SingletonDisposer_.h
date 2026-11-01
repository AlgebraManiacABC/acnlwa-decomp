#ifndef ACNLWA_NPCPERMITBITMGR_SINGLETONDISPOSER__H
#define ACNLWA_NPCPERMITBITMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace NpcPermitBitMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace NpcPermitBitMgr

#endif  // ACNLWA_NPCPERMITBITMGR_SINGLETONDISPOSER__H
