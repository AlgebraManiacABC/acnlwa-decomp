/**
 * FUN_0041693c.c
 * Source line: 582158
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0041693c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20 [2];
  
  iVar2 = param_1 + 0x1f28;
  thunk_FUN_00135748(iVar2);
  if (*(char *)(param_1 + 0x1f26) != '\0') {
    local_20[0] = FUN_00468bec(param_1 + 0x1f1c,param_2,param_3,param_4,
                               *(ushort *)(param_1 + 0x1f24) & 0xff,
                               *(undefined1 *)(*(int *)(param_1 + 8) + 0x14));
    uVar1 = FUN_0072fb4c(param_1,local_20);
    thunk_FUN_001357ec(iVar2);
    return uVar1;
  }
  thunk_FUN_001357ec(iVar2);
  return 0xd8a14868;
}
