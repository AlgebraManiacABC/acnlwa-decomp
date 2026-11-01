#ifndef ACNLWA_PEAD_BUFFEREDSAFESTRINGBASE_H
#define ACNLWA_PEAD_BUFFEREDSAFESTRINGBASE_H

#include "acnlwa/pead/SafeStringBase.h"

namespace pead {

template <typename T0>
class BufferedSafeStringBase : public ::pead::SafeStringBase<T0> {
public:
    virtual ~BufferedSafeStringBase();
    virtual void VF02();
};

template <typename T0>
BufferedSafeStringBase<T0>::~BufferedSafeStringBase() {}

template <typename T0>
void BufferedSafeStringBase<T0>::VF02() {}


}  // namespace pead

#endif  // ACNLWA_PEAD_BUFFEREDSAFESTRINGBASE_H
