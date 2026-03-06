/**
 * FUN_0023ad1c.c
 * Source line: 291398
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0023ad1c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008ee3a0;
  param_1[0x1f] = &UNK_008ee4e8;
  if (*(char *)(param_1 + 0x89) < '\0') {
    FUN_00813b30(param_1 + 0x89,7,0);
    FUN_00292ca8();
  }
  if ((*(byte *)((int)param_1 + 0x225) & 1) != 0) {
    FUN_00813b30(param_1 + 0x89,8,0);
    FUN_00292ca8();
  }
  iVar1 = FUN_002e6944(param_1 + 0x46);
  iVar1 = FUN_005dd284(iVar1 + -0x9c);
  FUN_003170d0(iVar1 + -0x7c);
  return;
}
