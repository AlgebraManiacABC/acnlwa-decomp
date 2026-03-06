/**
 * FUN_00765564.c
 * Source line: 1123849
 * Body lines: 10
 */
#include "../../../include/types.h"

byte FUN_00765564(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_005c91a0(*(undefined1 *)(param_1 + 0x1ac));
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x1ac) & 3;
  }
  else {
    bVar1 = FUN_005c12d0(*(byte *)(param_1 + 0x1ac));
  }
  return bVar1;
}
