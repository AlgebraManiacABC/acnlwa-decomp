#include "acnlwa/script/WordPtr.h"
#include "types.h"

namespace script {

WordPtr::~WordPtr() {}

// was FUN_005fcf94
unsigned int WordPtr::VF02()
{
  int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

// was FUN_0075cc5c
unsigned int WordPtr::VF03()
{
  int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

// was FUN_0075cc44
unsigned int WordPtr::VF04()
{
  int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

void WordPtr::VF05() {}

void WordPtr::VF06() {}

void WordPtr::VF07() {}

void WordPtr::VF08() {}

void WordPtr::VF09() {}

void WordPtr::VF10() {}

void WordPtr::VF11() {}

}  // namespace script
