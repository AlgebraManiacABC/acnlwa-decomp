/**
 * FUN_00483728.c
 * Source line: 655418
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00483728(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 1);
  if (0 < iVar1) {
    __rt_memclr((undefined4 *)((int)param_1 + iVar1 + 8),0x10 - iVar1);
    FUN_00483184(param_1 + 6,param_1 + 2,1,*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}
