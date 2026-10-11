#include "acnlwa/fgobj/ObjectSwing.h"
#include "types.h"

extern "C" {
int FUN_002e6368(...);
int FUN_00590ad8(...);
}

namespace fgobj {

ObjectSwing::~ObjectSwing() {}

void ObjectSwing::VF04() {}

// was FUN_00593cf0
void ObjectSwing::VF05()
{
  int param_1 = (int)this;
  if ((*(int *)(param_1 + 0x148) != 0) &&
     (*(int *)(param_1 + 0x14c) == *(int *)(*(int *)(param_1 + 0x148) + 0xc))) {
    FUN_002e6368(param_1 + 0x13c);
  }
  if ((*(int *)(param_1 + 0x160) != 0) &&
     (*(int *)(param_1 + 0x164) == *(int *)(*(int *)(param_1 + 0x160) + 0xc))) {
    FUN_002e6368(param_1 + 0x154);
  }
  FUN_00590ad8(param_1);
  return;
}

void ObjectSwing::VF08() {}

void ObjectSwing::VF09() {}

}  // namespace fgobj
