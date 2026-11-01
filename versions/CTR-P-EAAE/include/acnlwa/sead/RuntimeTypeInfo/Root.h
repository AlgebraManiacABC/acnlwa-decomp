#ifndef ACNLWA_SEAD_RUNTIMETYPEINFO_ROOT_H
#define ACNLWA_SEAD_RUNTIMETYPEINFO_ROOT_H

#include "acnlwa/sead/RuntimeTypeInfo/Interface.h"

namespace sead {
namespace RuntimeTypeInfo {

class Root : public ::sead::RuntimeTypeInfo::Interface {
public:
    virtual void VF00();
};

}  // namespace RuntimeTypeInfo
}  // namespace sead

#endif  // ACNLWA_SEAD_RUNTIMETYPEINFO_ROOT_H
