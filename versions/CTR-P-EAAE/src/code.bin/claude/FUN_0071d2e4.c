/**
 * FUN_0071d2e4.c
 * Source line: 1074869
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0071d2e4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 6) && (*(int *)(param_1 + param_2 * 4 + 0x14) != 0)) {
    uVar1 = FUN_0013c0e8(param_1 + param_2 * 0x18 + 0x2c);
    return uVar1;
  }
  return 0;
}
