#ifndef ACNLWA_PEAD_FIXEDSAFESTRING_H
#define ACNLWA_PEAD_FIXEDSAFESTRING_H

#include "acnlwa/pead/FixedSafeStringBase.h"

namespace pead {

template <int T0>
class FixedSafeString : public ::pead::FixedSafeStringBase<char,T0> {
public:
    virtual ~FixedSafeString();
};

template <int T0>
FixedSafeString<T0>::~FixedSafeString() {}


}  // namespace pead

#endif  // ACNLWA_PEAD_FIXEDSAFESTRING_H
