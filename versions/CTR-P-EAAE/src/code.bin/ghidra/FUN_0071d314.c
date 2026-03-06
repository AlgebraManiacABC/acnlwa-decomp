/**
 * FUN_0071d314.c
 * Source line: 1074883
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0071d314(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 6) {
    uVar1 = 0;
    if (*(int *)(param_1 + param_2 * 4 + 0x14) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
