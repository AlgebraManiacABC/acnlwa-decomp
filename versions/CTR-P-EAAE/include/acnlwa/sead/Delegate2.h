#ifndef ACNLWA_SEAD_DELEGATE2_H
#define ACNLWA_SEAD_DELEGATE2_H

#include "acnlwa/sead/DelegateBase.h"
#include "acnlwa/sead/IDelegate2.h"

namespace sead {

template <typename T0, typename T1, typename T2>
class Delegate2 : public sead::DelegateBase<T0,void(T0::*)(T1,T2),sead::IDelegate2<T1,T2> > {
public:
    virtual ~Delegate2();
};

template <typename T0, typename T1, typename T2>
Delegate2<T0, T1, T2>::~Delegate2() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATE2_H
