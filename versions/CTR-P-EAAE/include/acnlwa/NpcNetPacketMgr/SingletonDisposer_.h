#ifndef ACNLWA_NPCNETPACKETMGR_SINGLETONDISPOSER__H
#define ACNLWA_NPCNETPACKETMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace NpcNetPacketMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace NpcNetPacketMgr

#endif  // ACNLWA_NPCNETPACKETMGR_SINGLETONDISPOSER__H
