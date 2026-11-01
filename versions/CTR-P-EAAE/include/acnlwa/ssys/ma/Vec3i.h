#ifndef ACNLWA_SSYS_MA_VEC3I_H
#define ACNLWA_SSYS_MA_VEC3I_H

#include "acnlwa/sead/Vector3.h"

namespace ssys {
namespace ma {

class Vec3i : public ::sead::Vector3<int> {
public:
    virtual ~Vec3i();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_VEC3I_H
