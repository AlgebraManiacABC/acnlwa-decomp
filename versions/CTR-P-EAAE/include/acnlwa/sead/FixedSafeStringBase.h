#ifndef ACNLWA_SEAD_FIXEDSAFESTRINGBASE_H
#define ACNLWA_SEAD_FIXEDSAFESTRINGBASE_H

#include "acnlwa/sead/BufferedSafeStringBase.h"

namespace sead {

template <typename T0, int T1>
class FixedSafeStringBase : public ::sead::BufferedSafeStringBase<T0> {
public:
    virtual ~FixedSafeStringBase();
};

template <typename T0, int T1>
FixedSafeStringBase<T0, T1>::~FixedSafeStringBase() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_FIXEDSAFESTRINGBASE_H
