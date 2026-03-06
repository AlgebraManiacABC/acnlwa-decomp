/**
 * FUN_00759b80.c
 * Source line: 1114922
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00759b80(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0xa4) < 0xb) {
    uVar1 = *(undefined4 *)(&DAT_008917cc + (uint)*(byte *)(param_1 + 0xa4) * 4);
  }
  else {
    uVar1 = 0x100038e;
  }
  return uVar1;
}
