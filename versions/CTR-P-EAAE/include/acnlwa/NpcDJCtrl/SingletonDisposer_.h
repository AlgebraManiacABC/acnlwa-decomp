#ifndef ACNLWA_NPCDJCTRL_SINGLETONDISPOSER__H
#define ACNLWA_NPCDJCTRL_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace NpcDJCtrl {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace NpcDJCtrl

#endif  // ACNLWA_NPCDJCTRL_SINGLETONDISPOSER__H
