/**
 * FUN_00756d30.c
 * Source line: 1112392
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00756d30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (((*(byte *)(param_1 + 0xaa) >> (iVar2 + 4U & 0xff) & 1) != 0 ||
         (iVar1 = FUN_00311a34(param_1 + iVar2 * 0x16 + 8,param_2), iVar1 == 0))) {
    iVar2 += 1;
    if (2 < iVar2) {
      return 0;
    }
  }
  return 1;
}
