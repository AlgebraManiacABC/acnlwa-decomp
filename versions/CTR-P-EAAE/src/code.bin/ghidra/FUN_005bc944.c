/**
 * FUN_005bc944.c
 * Source line: 867844
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005bc944(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00311a34(param_1 + iVar2 * 0x16 + 8,param_2);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) | (byte)(1 << (iVar2 + 4U & 0xff));
    }
    iVar2 += 1;
  } while (iVar2 < 3);
  return;
}
