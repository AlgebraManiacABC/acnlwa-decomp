/**
 * FUN_005d5cb0.c
 * Source line: 884522
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005d5cb0(int param_1)

{
  int iVar1;
  undefined1 auStack_28 [24];
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x11cd0) + 0x10);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FUN_005f723c(auStack_28);
  FUN_005f6eb0(auStack_28,param_1 + 0x11cd4,iVar1,4,0,4);
  *(int *)(param_1 + 0x11d14) = iVar1;
  *(undefined1 *)(param_1 + 0x11d12) = 1;
  FUN_005edca8(param_1,param_1 + 0x11cd4);
  return;
}
