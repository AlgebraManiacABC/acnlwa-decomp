#include "acnlwa/hobj/MyHouse.h"
#include "types.h"

extern "C" {
int FUN_004ee364(...);
int FUN_0053138c(...);
}

namespace hobj {

MyHouse::~MyHouse() {}

void MyHouse::VF02() {}

void MyHouse::VF03() {}

void MyHouse::VF04() {}

void MyHouse::VF05() {}

void MyHouse::VF06() {}

// was FUN_005342fc
void MyHouse::VF07()
{
  int param_1 = (int)this;
  FUN_0053138c(param_1 + 0x4c8);
  FUN_004ee364(param_1 + 0x4a8,0);
  return;
}

void MyHouse::VF08() {}

void MyHouse::VF09() {}

void MyHouse::VF10() {}

void MyHouse::VF11() {}

void MyHouse::VF12() {}

void MyHouse::VF13() {}

void MyHouse::VF14() {}

void MyHouse::VF15() {}

void MyHouse::VF16() {}

}  // namespace hobj
