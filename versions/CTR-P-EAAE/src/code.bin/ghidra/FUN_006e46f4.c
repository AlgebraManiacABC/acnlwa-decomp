/**
 * FUN_006e46f4.c
 * Source line: 1042210
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_006e46f4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ba40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x58) = param_1;
    *(undefined4 *)(param_1 + 0x5c) = 0x45100000;
    *(undefined4 *)(param_1 + 0x60) = 0x41600000;
    *(undefined2 *)(param_1 + 100) = 2;
  }
  return iVar1 != 0;
}
