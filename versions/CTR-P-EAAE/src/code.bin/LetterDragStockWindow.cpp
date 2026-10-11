#include "acnlwa/LetterDragStockWindow.h"
#include "types.h"

extern "C" {
int FUN_001323bc(...);
int FUN_0029b5a4(...);
int FUN_00569e6c(...);
}

void LetterDragStockWindow::VF01() {}

void LetterDragStockWindow::LetterDragWindowBase_VF02() {}

// was FUN_00328670
void LetterDragStockWindow::VF03()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  FUN_0029b5a4();
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 600,1);
  return;
}

LetterDragStockWindow::~LetterDragStockWindow() {}

