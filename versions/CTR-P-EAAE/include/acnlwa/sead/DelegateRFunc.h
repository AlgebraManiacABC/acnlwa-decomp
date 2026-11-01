#ifndef ACNLWA_SEAD_DELEGATERFUNC_H
#define ACNLWA_SEAD_DELEGATERFUNC_H

#include "acnlwa/sead/DelegateBase.h"
#include "acnlwa/sead/IDelegateR.h"

namespace sead {

template <typename T0>
class DelegateRFunc : public sead::DelegateBase<void,T0(*)(),sead::IDelegateR<T0> > {
public:
    virtual ~DelegateRFunc();
};

template <typename T0>
DelegateRFunc<T0>::~DelegateRFunc() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATERFUNC_H
