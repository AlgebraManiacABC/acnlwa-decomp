/**
 * FUN_002e2b60.c
 * Source line: 379043
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002e2b60(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x7fc) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x7fc) = 1;
  piVar2 = (int *)(param_1 + 0x75c);
  *(byte *)(param_1 + 0x808) = *(byte *)(param_1 + 0x808) | 1;
  param_1 += 0x4c4;
  uVar1 = FUN_004b4fc0(param_1,"G_inout",1);
  FUN_00568630(param_1,piVar2,uVar1,0);
  (**(code **)(*piVar2 + 8))(0,piVar2);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1);
}
