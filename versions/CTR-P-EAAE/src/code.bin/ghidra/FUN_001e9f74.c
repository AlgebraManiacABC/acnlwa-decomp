/**
 * FUN_001e9f74.c
 * Source line: 251355
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001e9f74(int param_1)

{
  int iVar1;
  
  FUN_0056b1b8(param_1 + 0x1c4,0,0x10);
  FUN_002fcdac(param_1 + 0xd0,*(undefined4 *)(param_1 + 0x1c4),(int)*(char *)(param_1 + 0x205),0);
  iVar1 = *(int *)(param_1 + 0x198);
  if (iVar1 < *(int *)(param_1 + 0x19c)) {
    iVar1 += 1;
    *(int *)(param_1 + 0x198) = iVar1;
  }
  if ((*(int *)(param_1 + 0x19c) <= iVar1) && (iVar1 = FUN_0027d394(param_1), iVar1 != 0)) {
    FUN_007c7834(param_1 + 0x18c,0xb);
  }
  return;
}
