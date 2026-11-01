#ifndef ACNLWA_SEAD_FIXEDSAFESTRING_H
#define ACNLWA_SEAD_FIXEDSAFESTRING_H

#include "acnlwa/sead/FixedSafeStringBase.h"

namespace sead {

template <int T0>
class FixedSafeString : public ::sead::FixedSafeStringBase<char,T0> {
public:
    virtual ~FixedSafeString();
};

template <int T0>
FixedSafeString<T0>::~FixedSafeString() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_FIXEDSAFESTRING_H
