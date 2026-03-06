/**
 * FUN_00730198.c
 * Source line: 1086861
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00730198(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(ushort *)(param_1 + 0x42) == param_2) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
