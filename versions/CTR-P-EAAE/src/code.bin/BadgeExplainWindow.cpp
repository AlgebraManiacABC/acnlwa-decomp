#include "acnlwa/BadgeExplainWindow.h"
#include "types.h"

extern "C" {
int FUN_001cb78c(...);
int FUN_005d6bfc(...);
int FUN_005e2e04(...);
}

BadgeExplainWindow::~BadgeExplainWindow() {}

// was FUN_002d6560
unsigned int BadgeExplainWindow::VF06()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  uVar1 = FUN_001cb78c();
  FUN_005d6bfc(param_1 + 0x2d8);
  FUN_005e2e04(param_1 + 0x214);
  return uVar1;
}

void BadgeExplainWindow::VF10() {}

