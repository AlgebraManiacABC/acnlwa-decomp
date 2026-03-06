/**
 * FUN_007537c4.c
 * Source line: 1109416
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_007537c4(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x24) == 0;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x28);
  }
  if (!bVar1 || param_1 != 0) {
    param_1 = 1;
  }
  return param_1;
}
