#ifndef ACNLWA_PEAD_RUNTIMETYPEINFO_DERIVE_H
#define ACNLWA_PEAD_RUNTIMETYPEINFO_DERIVE_H

#include "acnlwa/pead/RuntimeTypeInfo/Interface.h"

namespace pead {
namespace RuntimeTypeInfo {

template <typename T0>
class Derive : public ::pead::RuntimeTypeInfo::Interface {
public:
    virtual void VF00();
};

template <typename T0>
void Derive<T0>::VF00() {}


}  // namespace RuntimeTypeInfo
}  // namespace pead

#endif  // ACNLWA_PEAD_RUNTIMETYPEINFO_DERIVE_H
