#include "acnlwa/sead/TaskBase.h"
#include "types.h"

namespace sead {

TaskBase::~TaskBase() {}

void TaskBase::VF02() {}

void TaskBase::VF03() {}

void TaskBase::VF08() {}

void TaskBase::VF09() {}

void TaskBase::VF10() {}

void TaskBase::VF11() {}

void TaskBase::VF12() {}

void TaskBase::VF13() {}

void TaskBase::VF14() {}

void TaskBase::VF21() {}

// was FUN_0074e960
undefined4 TaskBase::getMethodTreeMgr() const
{
  int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x20) + 0x20);
}

}  // namespace sead
