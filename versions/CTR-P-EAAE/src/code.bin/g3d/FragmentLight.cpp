#include "acnlwa/g3d/FragmentLight.h"
#include "types.h"

extern "C" {
int FUN_002f73b8(...);
int FUN_004ee39c(...);
}

namespace g3d {

FragmentLight::~FragmentLight() {}

void FragmentLight::VF02() {}

// was FUN_004ed3dc
void FragmentLight::VF03()
{
  int param_1 = (int)this;
  FUN_002f73b8(param_1 + 0xc);
  FUN_004ee39c(param_1);
  return;
}

void FragmentLight::VF04() {}

void FragmentLight::VF05() {}

void FragmentLight::VF06() {}

}  // namespace g3d
