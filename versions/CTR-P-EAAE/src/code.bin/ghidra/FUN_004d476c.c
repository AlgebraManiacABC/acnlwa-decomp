/**
 * FUN_004d476c.c
 * Source line: 717455
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004d476c(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x48] != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined1 *)((int)param_1 + 0x121) = 0;
    FUN_004c4f7c(param_1);
    iVar1 = param_1[0x47];
    FUN_001408d4(iVar1 + 8,param_1 + 0x3e);
    (**(code **)(*param_1 + 0x10))(param_1);
    FUN_0013e7d8(iVar1 + 0x14,iVar1 + 0x18,param_1 + 0x3e);
    return;
  }
  return;
}
