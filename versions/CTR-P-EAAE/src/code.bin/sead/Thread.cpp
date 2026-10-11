#include "acnlwa/sead/Thread.h"
#include "types.h"

namespace sead {

Thread::~Thread() {}

void Thread::VF02() {}

void Thread::VF03() {}

void Thread::VF04() {}

void Thread::VF05() {}

void Thread::VF06() {}

void Thread::VF07() {}

void Thread::VF08() {}

void Thread::VF09() {}

void Thread::VF10() {}

void Thread::VF11() {}

// was FUN_0074de24
unsigned int Thread::VF12()
{
  int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x88);
}

void Thread::VF13() {}

void Thread::VF14() {}

// was FUN_0074de44
unsigned int Thread::VF15()
{
  return 0;
}

// was FUN_0074de4c
unsigned int Thread::VF17()
{
  int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x84);
}

}  // namespace sead
