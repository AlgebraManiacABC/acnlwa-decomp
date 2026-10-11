#include "acnlwa/LifeSupportWindow.h"
#include "types.h"

extern "C" {
int FUN_001cb690(...);
}

LifeSupportWindow::~LifeSupportWindow() {}

void LifeSupportWindow::Mode_VF02() {}

void LifeSupportWindow::LifeSupportWindow_VF03() {}

void LifeSupportWindow::LifeSupportWindow_VF04() {}

void LifeSupportWindow::LifeSupportWindow_VF05() {}

void LifeSupportWindow::LifeSupportWindow_VF06() {}

void LifeSupportWindow::LifeSupportWindow_VF07() {}

void LifeSupportWindow::LifeSupportWindow_VF08() {}

// was FUN_002cea28
void LifeSupportWindow::LifeSupportWindow_VF09()
{
  int param_1 = (int)this;
  FUN_001cb690(param_1 + 0x274);
  FUN_001cb690(param_1 + 0xf58);
  return;
}

void LifeSupportWindow::VF10() {}

