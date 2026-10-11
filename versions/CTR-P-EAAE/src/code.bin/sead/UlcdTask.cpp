#include "acnlwa/sead/UlcdTask.h"
#include "types.h"

extern "C" {
int FUN_00544110(...);
int FUN_0054488c(...);
}

namespace sead {

UlcdTask::~UlcdTask() {}

void UlcdTask::VF02() {}

void UlcdTask::VF03() {}

void UlcdTask::VF05() {}

void UlcdTask::VF07() {}

void UlcdTask::VF16() {}

// was FUN_00560d4c
void UlcdTask::VF18()
{
  int param_1 = (int)this;
  FUN_00544110();
  FUN_0054488c(param_1 + 0x15c);
  return;
}

void UlcdTask::VF19() {}

void UlcdTask::VF20() {}

void UlcdTask::VF23() {}

void UlcdTask::VF25() {}

void UlcdTask::VF26() {}

}  // namespace sead
