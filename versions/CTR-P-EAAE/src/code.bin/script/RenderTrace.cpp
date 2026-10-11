#include "acnlwa/script/RenderTrace.h"
#include "types.h"

extern "C" {
int FUN_005d60d4(...);
}

namespace script {

RenderTrace::~RenderTrace() {}

// was FUN_005df350
void RenderTrace::VF02()
{
  int param_1 = (int)this;
  FUN_005d60d4(*(undefined4 *)(param_1 + 0x60));
  if (*(int *)(param_1 + 100) != 0) {
    FUN_005d60d4();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

void RenderTrace::VF03() {}

void RenderTrace::VF04() {}

void RenderTrace::VF05() {}

void RenderTrace::VF06() {}

}  // namespace script
