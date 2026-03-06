/**
 * FUN_002c3138.c
 * Source line: 363180
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002c3138(int param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x1cb) == '\0') && (iVar1 = FUN_00300900(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_0061a79c(param_1), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x1c8) = 3;
    *(undefined1 *)(param_1 + 0x1c9) = 0;
    return;
  }
  FUN_005210a8(param_1);
  return;
}
