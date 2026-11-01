#include "../../../include/types.h"

void FUN_006ce298(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != &UNK_006cd33c) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0081b858(param_1,&UNK_006cd60c,0);
    return;
  }
  return;
}
