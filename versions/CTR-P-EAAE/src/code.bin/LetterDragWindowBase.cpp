#include "acnlwa/LetterDragWindowBase.h"
#include "types.h"

extern "C" {
int FUN_0029b6f8(...);
int FUN_00567e24(...);
}

// was FUN_003204d8
void LetterDragWindowBase::VF00()
{
  int param_1 = (int)this;
  FUN_00567e24(param_1 + 0x10,"Layout/ItemWin/ltr_icon.arc");
  return;
}

void LetterDragWindowBase::VF01() {}

// was FUN_00320490
void LetterDragWindowBase::LetterDragWindowBase_VF02()
{
  int param_1 = (int)this;
  FUN_0029b6f8(param_1 + 0x201c);
  return;
}

void LetterDragWindowBase::VF03() {}

void LetterDragWindowBase::VF04() {}

