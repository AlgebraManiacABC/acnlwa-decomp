/**
 * FUN_00159dc0.c
 * Source line: 172549
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00159dc0(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; *(char *)(param_1 + iVar2) != 0; iVar2 += 1) {
    iVar1 = (int)*(char *)(param_1 + iVar2) + iVar1 * 0x492;
  }
  __aeabi_uidivmod(iVar1);
  return extraout_r1;
}
