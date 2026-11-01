#ifndef ACNLWA_SEAD_DELEGATER_H
#define ACNLWA_SEAD_DELEGATER_H

#include "acnlwa/sead/DelegateBase.h"
#include "acnlwa/sead/IDelegateR.h"

namespace sead {

template <typename T0, typename T1>
class DelegateR : public sead::DelegateBase<T0,T1(T0::*)(),sead::IDelegateR<T1> > {
public:
    virtual ~DelegateR();
};

template <typename T0, typename T1>
DelegateR<T0, T1>::~DelegateR() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATER_H
