#ifndef ACNLWA_PEAD_RUNTIMETYPEINFO_ROOT_H
#define ACNLWA_PEAD_RUNTIMETYPEINFO_ROOT_H

#include "acnlwa/pead/RuntimeTypeInfo/Interface.h"

namespace pead {
namespace RuntimeTypeInfo {

class Root : public ::pead::RuntimeTypeInfo::Interface {
public:
    virtual void VF00();
};

}  // namespace RuntimeTypeInfo
}  // namespace pead

#endif  // ACNLWA_PEAD_RUNTIMETYPEINFO_ROOT_H
