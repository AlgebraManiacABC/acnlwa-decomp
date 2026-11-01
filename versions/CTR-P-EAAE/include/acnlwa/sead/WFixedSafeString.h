#ifndef ACNLWA_SEAD_WFIXEDSAFESTRING_H
#define ACNLWA_SEAD_WFIXEDSAFESTRING_H

#include "acnlwa/sead/FixedSafeStringBase.h"

namespace sead {

template <int T0>
class WFixedSafeString : public ::sead::FixedSafeStringBase<wchar_t,T0> {
public:
    virtual ~WFixedSafeString();
    virtual void VF02();
};

template <int T0>
WFixedSafeString<T0>::~WFixedSafeString() {}

template <int T0>
void WFixedSafeString<T0>::VF02() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_WFIXEDSAFESTRING_H
