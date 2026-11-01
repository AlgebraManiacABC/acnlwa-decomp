#ifndef ACNLWA_SEAD_RUNTIMETYPEINFO_DERIVE_H
#define ACNLWA_SEAD_RUNTIMETYPEINFO_DERIVE_H

#include "acnlwa/sead/RuntimeTypeInfo/Interface.h"

namespace sead {
namespace RuntimeTypeInfo {

template <typename T0>
class Derive : public ::sead::RuntimeTypeInfo::Interface {
public:
    virtual void VF00();
};

template <typename T0>
void Derive<T0>::VF00() {}


}  // namespace RuntimeTypeInfo
}  // namespace sead

#endif  // ACNLWA_SEAD_RUNTIMETYPEINFO_DERIVE_H
