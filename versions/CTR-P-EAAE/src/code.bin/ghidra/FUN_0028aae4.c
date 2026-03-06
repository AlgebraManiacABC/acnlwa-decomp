/**
 * FUN_0028aae4.c
 * Source line: 331882
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0028aae4(undefined4 param_1,int param_2,int param_3)

{
  if (param_3 != 0 && param_2 != 0) {
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(byte *)(param_3 + 0xb7) = *(byte *)(param_3 + 0xb7) & 0xcf;
    if (*(int *)(param_3 + 0xc) != 0) {
      FUN_004b6dc8(*(int *)(param_3 + 0xc),param_3);
    }
    FUN_004b6d74(param_2,param_3);
    return;
  }
  return;
}
