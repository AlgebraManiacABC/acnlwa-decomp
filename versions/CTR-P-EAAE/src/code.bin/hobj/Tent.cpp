#include "acnlwa/hobj/Tent.h"
#include "types.h"

extern "C" {
int FUN_004edd20(...);
int FUN_004ee4c8(...);
}

namespace hobj {

Tent::~Tent() {}

void Tent::VF02() {}

void Tent::VF03() {}

void Tent::VF04() {}

void Tent::VF05() {}

// was FUN_00532d60
void Tent::VF06()
{
  int param_1 = (int)this;
  FUN_004ee4c8(param_1 + 0x270);
  FUN_004edd20(param_1 + 0x270);
  return;
}

void Tent::VF07() {}

void Tent::VF08() {}

void Tent::VF09() {}

void Tent::VF10() {}

void Tent::VF11() {}

void Tent::VF12() {}

void Tent::VF13() {}

void Tent::VF14() {}

void Tent::VF15() {}

void Tent::VF16() {}

}  // namespace hobj
