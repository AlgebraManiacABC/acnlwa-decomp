#include "acnlwa/script/CapitalTopEngine.h"
#include "types.h"

extern "C" {
int FUN_005ea294(...);
}

namespace script {

CapitalTopEngine::~CapitalTopEngine() {}

void CapitalTopEngine::VF02() {}

void CapitalTopEngine::VF03() {}

void CapitalTopEngine::VF04() {}

// was FUN_005e6668
void CapitalTopEngine::VF05()
{
  int param_1 = (int)this;
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = FUN_005ea294(), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

void CapitalTopEngine::VF06() {}

}  // namespace script
