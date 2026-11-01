#ifndef ACNLWA_NPCLOCKPLAYERPERMITBIT_SINGLETONDISPOSER__H
#define ACNLWA_NPCLOCKPLAYERPERMITBIT_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace NpcLockPlayerPermitBit {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace NpcLockPlayerPermitBit

#endif  // ACNLWA_NPCLOCKPLAYERPERMITBIT_SINGLETONDISPOSER__H
