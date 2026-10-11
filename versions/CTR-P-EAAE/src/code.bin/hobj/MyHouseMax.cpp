#include "acnlwa/hobj/MyHouseMax.h"
#include "types.h"

extern "C" {
int FUN_004ee364(...);
int FUN_0053138c(...);
}

namespace hobj {

MyHouseMax::~MyHouseMax() {}

void MyHouseMax::VF02() {}

void MyHouseMax::VF03() {}

void MyHouseMax::VF04() {}

void MyHouseMax::VF05() {}

void MyHouseMax::VF06() {}

// was FUN_0052fd6c
void MyHouseMax::VF07()
{
  int param_1 = (int)this;
  FUN_0053138c(param_1 + 0x3ac);
  FUN_004ee364(param_1 + 0x38c,0);
  return;
}

void MyHouseMax::VF08() {}

void MyHouseMax::VF09() {}

void MyHouseMax::VF10() {}

void MyHouseMax::VF11() {}

void MyHouseMax::VF12() {}

void MyHouseMax::VF13() {}

void MyHouseMax::VF14() {}

void MyHouseMax::VF15() {}

void MyHouseMax::VF16() {}

}  // namespace hobj
