/**
 * FUN_004c6064.c
 * Source line: 706329
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004c6064(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x328e) != '\0') {
    *(undefined1 *)((int)param_1 + 0x328e) = 0;
    FUN_004cf270(param_1 + 0x8c5);
    FUN_004c4f7c(param_1);
    iVar1 = param_1[0xc11];
    FUN_001408d4(iVar1 + 8,param_1 + 0x3e);
    (**(code **)(*param_1 + 0x10))(param_1);
    FUN_0013e7d8(iVar1 + 0x14,iVar1 + 0x18,param_1 + 0x3e);
    return;
  }
  return;
}
