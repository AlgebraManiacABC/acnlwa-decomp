#include "acnlwa/nw/lyt/Material.h"
#include "types.h"

namespace nw {
namespace lyt {

Material::~Material() {}

void Material::VF02() {}

void Material::VF03() {}

void Material::VF04() {}

void Material::VF05() {}

void Material::VF06() {}

void Material::VF07() {}

void Material::VF08() {}

void Material::VF09() {}

void Material::VF10() {}

// was FUN_004bc520
int Material::GetTexSRTAry()
{
  int param_1 = (int)this;
  return *(int *)(param_1 + 0x34) + ((uint)(*(int *)(param_1 + 0x2c) << 0x1e) >> 0x19);
}

}  // namespace lyt
}  // namespace nw
