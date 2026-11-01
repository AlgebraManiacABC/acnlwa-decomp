#ifndef ACNLWA_PEAD_FIXEDSAFESTRINGBASE_H
#define ACNLWA_PEAD_FIXEDSAFESTRINGBASE_H

#include "acnlwa/pead/BufferedSafeStringBase.h"

namespace pead {

template <typename T0, int T1>
class FixedSafeStringBase : public ::pead::BufferedSafeStringBase<T0> {
public:
    virtual ~FixedSafeStringBase();
};

template <typename T0, int T1>
FixedSafeStringBase<T0, T1>::~FixedSafeStringBase() {}


}  // namespace pead

#endif  // ACNLWA_PEAD_FIXEDSAFESTRINGBASE_H
