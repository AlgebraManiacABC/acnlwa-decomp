#include "acnlwa/script/ChoiceStandard.h"
#include "types.h"

namespace script {

// was FUN_005e4858
void ChoiceStandard::VF02(unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
  int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  *(undefined4 *)(param_1 + 0xd0) = param_3;
  *(undefined4 *)(param_1 + 0xd4) = param_4;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

// was FUN_0075b008
bool ChoiceStandard::VF03()
{
  int param_1 = (int)this;
  return *(char *)(param_1 + 4) == '\0';
}

void ChoiceStandard::VF05() {}

ChoiceStandard::~ChoiceStandard() {}

void ChoiceStandard::VF10() {}

// was FUN_005e4850
void ChoiceStandard::VF11(unsigned char param_2)
{
  int param_1 = (int)this;
  *(undefined1 *)(param_1 + 200) = param_2;
  return;
}

void ChoiceStandard::VF12() {}

void ChoiceStandard::VF13() {}

void ChoiceStandard::VF14() {}

}  // namespace script
