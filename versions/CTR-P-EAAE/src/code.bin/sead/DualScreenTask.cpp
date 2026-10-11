#include "acnlwa/sead/DualScreenTask.h"
#include "types.h"

extern "C" {
int FUN_0054488c(...);
}

namespace sead {

DualScreenTask::~DualScreenTask() {}

void DualScreenTask::VF02() {}

void DualScreenTask::VF03() {}

void DualScreenTask::VF04() {}

void DualScreenTask::VF05() {}

void DualScreenTask::VF06() {}

void DualScreenTask::VF07() {}

void DualScreenTask::VF15() {}

void DualScreenTask::VF16() {}

void DualScreenTask::VF17() {}

// was FUN_00544110
void DualScreenTask::VF18()
{
  int param_1 = (int)this;
  FUN_0054488c(param_1 + 0xbc);
  FUN_0054488c(param_1 + 0x10c);
  return;
}

void DualScreenTask::VF19() {}

void DualScreenTask::VF20() {}

void DualScreenTask::VF22() {}

void DualScreenTask::VF23() {}

void DualScreenTask::VF24() {}

}  // namespace sead
