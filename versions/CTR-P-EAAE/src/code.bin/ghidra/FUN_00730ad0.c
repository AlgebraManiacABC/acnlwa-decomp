/**
 * FUN_00730ad0.c
 * Source line: 1087305
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00730ad0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x174;
  thunk_FUN_00135748(iVar2);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 0x14 + 0x3c) != 0) {
      thunk_FUN_001357ec(iVar2);
      return 1;
    }
    uVar1 += 1;
  } while (uVar1 < 0x10);
  thunk_FUN_001357ec(iVar2);
  return 0;
}
