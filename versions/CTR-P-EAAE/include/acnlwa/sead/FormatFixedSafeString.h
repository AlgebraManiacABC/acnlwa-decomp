#ifndef ACNLWA_SEAD_FORMATFIXEDSAFESTRING_H
#define ACNLWA_SEAD_FORMATFIXEDSAFESTRING_H

#include "acnlwa/sead/FixedSafeString.h"

namespace sead {

template <int T0>
class FormatFixedSafeString : public ::sead::FixedSafeString<T0> {
public:
    virtual ~FormatFixedSafeString();
};

template <int T0>
FormatFixedSafeString<T0>::~FormatFixedSafeString() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_FORMATFIXEDSAFESTRING_H
