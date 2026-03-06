/**
 * FUN_00825e84.c
 * Source line: 1235329
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_00825e84(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = FUN_00306f60(iVar3);
  if (-1 < iVar1) {
    __aeabi_idivmod(iVar1,*(undefined4 *)(iVar3 + 0x14));
    *param_2 = extraout_r1;
    uVar2 = __aeabi_idivmod(iVar1,*(undefined4 *)(iVar3 + 0x14));
    *param_3 = uVar2;
  }
  return -1 < iVar1;
}
