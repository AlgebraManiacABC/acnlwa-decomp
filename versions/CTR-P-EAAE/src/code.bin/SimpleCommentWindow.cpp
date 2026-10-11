#include "acnlwa/SimpleCommentWindow.h"
#include "types.h"

extern "C" {
int FUN_00132478(...);
int FUN_001cb78c(...);
int FUN_005e2e04(...);
}

SimpleCommentWindow::~SimpleCommentWindow() {}

void SimpleCommentWindow::VF04() {}

// was FUN_002fe0e0
unsigned int SimpleCommentWindow::VF06()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  uVar1 = FUN_001cb78c();
  FUN_00132478(param_1 + 0x2e4);
  FUN_005e2e04(param_1 + 0x3c8);
  return uVar1;
}

void SimpleCommentWindow::VF10() {}

void SimpleCommentWindow::VF11() {}

