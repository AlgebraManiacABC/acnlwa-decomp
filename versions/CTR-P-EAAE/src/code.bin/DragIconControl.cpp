#include "acnlwa/DragIconControl.h"
#include "types.h"

extern "C" {
int FUN_001ff500(...);
}

DragIconControl::~DragIconControl() {}

void DragIconControl::ButtonActionControl_VF02() {}

void DragIconControl::VF03() {}

void DragIconControl::VF04() {}

void DragIconControl::VF06() {}

void DragIconControl::VF08() {}

void DragIconControl::VF09() {}

void DragIconControl::VF11() {}

// was FUN_0029b004
void DragIconControl::VF13()
{
  int param_1 = (int)this;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_001ff500();
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_001ff500();
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}

void DragIconControl::VF14() {}

