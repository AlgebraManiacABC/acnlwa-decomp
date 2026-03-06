/**
 * FUN_005d7eac.c
 * Source line: 886062
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005d7eac(int param_1)

{
  int iVar1;
  undefined1 auStack_28 [24];
  
  iVar1 = *(int *)**(undefined4 **)(param_1 + 0x11cd0);
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
