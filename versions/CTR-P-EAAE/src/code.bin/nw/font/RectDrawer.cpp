#include "acnlwa/nw/font/RectDrawer.h"
#include "types.h"

namespace nw {
namespace font {

RectDrawer::~RectDrawer() {}

// was FUN_004d7efc
void RectDrawer::VF02()
{
  int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x67c) = 0;
  return;
}

void RectDrawer::VF03() {}

void RectDrawer::VF04() {}

void RectDrawer::VF05() {}

void RectDrawer::VF06() {}

}  // namespace font
}  // namespace nw
