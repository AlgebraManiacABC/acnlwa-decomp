/**
 * FUN_00723b04.c
 * Source line: 1078536
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00723b04(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x79) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 200);
  }
  return uVar1;
}
