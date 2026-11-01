#ifndef ACNLWA_NPCNETSHAREINFO_SINGLETONDISPOSER__H
#define ACNLWA_NPCNETSHAREINFO_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace NpcNetShareInfo {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace NpcNetShareInfo

#endif  // ACNLWA_NPCNETSHAREINFO_SINGLETONDISPOSER__H
