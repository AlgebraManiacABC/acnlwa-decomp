#include "../../../include/types.h"

void FUN_006a40c8(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != &UNK_006a2d88) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0081b430(param_1,&UNK_006a38b0,0);
    return;
  }
  return;
}
