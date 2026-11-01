#ifndef ACNLWA_SEAD_BUFFEREDSAFESTRINGBASE_H
#define ACNLWA_SEAD_BUFFEREDSAFESTRINGBASE_H

#include "acnlwa/sead/SafeStringBase.h"

namespace sead {

template <typename T0>
class BufferedSafeStringBase : public ::sead::SafeStringBase<T0> {
public:
    virtual ~BufferedSafeStringBase();
    virtual void VF02();
};

template <typename T0>
BufferedSafeStringBase<T0>::~BufferedSafeStringBase() {}

template <typename T0>
void BufferedSafeStringBase<T0>::VF02() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_BUFFEREDSAFESTRINGBASE_H
