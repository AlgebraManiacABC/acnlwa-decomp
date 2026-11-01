#include "../../../include/types.h"

void FUN_0068bd4c(int param_1)

{
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0x7f;
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0064f368(param_1);
    FUN_0064dc88(0x41000000,param_1);
    FUN_00589898();
    return;
  }
  return;
}
