#ifndef ACNLWA_SEAD_DELEGATE1_H
#define ACNLWA_SEAD_DELEGATE1_H

#include "acnlwa/sead/DelegateBase.h"
#include "acnlwa/sead/IDelegate1.h"

namespace sead {

template <typename T0, typename T1>
class Delegate1 : public sead::DelegateBase<T0,void(T0::*)(T1),sead::IDelegate1<T1> > {
public:
    virtual ~Delegate1();
};

template <typename T0, typename T1>
Delegate1<T0, T1>::~Delegate1() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATE1_H
