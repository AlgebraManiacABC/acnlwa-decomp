#include "acnlwa/script/ChoiceStandard.h"
#include "types.h"

namespace script {

// TODO: verify FUN_005e4858
void ChoiceStandard::VF02(unsigned int param_2, unsigned int param_3, unsigned int param_4) {}

// TODO: verify FUN_0075b008
bool ChoiceStandard::VF03()
{
  int param_1 = (int)this;
  return *(char *)(param_1 + 4) == '\0';
}

void ChoiceStandard::VF05() {}

ChoiceStandard::~ChoiceStandard() {}

void ChoiceStandard::VF10() {}

// TODO: verify FUN_005e4850
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
