#ifndef ACNLWA_SEAD_DELEGATE_H
#define ACNLWA_SEAD_DELEGATE_H

#include "acnlwa/sead/DelegateBase.h"
#include "acnlwa/sead/IDelegate.h"

namespace sead {

template <typename T0>
class Delegate : public sead::DelegateBase<T0,void(T0::*)(),sead::IDelegate> {
public:
    virtual ~Delegate();
};

template <typename T0>
Delegate<T0>::~Delegate() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATE_H
