/**
 * FUN_006021d0.c
 * Source line: 918177
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006021d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x364);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x1c))(iVar1 + 0x4c);
    *(undefined1 *)(iVar1 + 0x78) = 3;
    **(undefined1 **)(iVar1 + 0xc) = 0;
    **(undefined1 **)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x364) = 0;
  }
  return;
}
