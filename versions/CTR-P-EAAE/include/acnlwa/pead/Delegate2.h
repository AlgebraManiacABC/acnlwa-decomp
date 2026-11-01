#ifndef ACNLWA_PEAD_DELEGATE2_H
#define ACNLWA_PEAD_DELEGATE2_H

#include "acnlwa/pead/DelegateBase.h"
#include "acnlwa/pead/IDelegate2.h"

namespace pead {

template <typename T0, typename T1, typename T2>
class Delegate2 : public pead::DelegateBase<T0,void(T0::*)(T1,T2),pead::IDelegate2<T1,T2> > {
public:
    virtual void VF00();
};

template <typename T0, typename T1, typename T2>
void Delegate2<T0, T1, T2>::VF00() {}


}  // namespace pead

#endif  // ACNLWA_PEAD_DELEGATE2_H
