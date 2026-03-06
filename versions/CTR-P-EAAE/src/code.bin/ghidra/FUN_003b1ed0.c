/**
 * FUN_003b1ed0.c
 * Source line: 522779
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003b1ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 8))();
  FUN_003cc040(param_1);
  iVar1 = FUN_003cd24c();
  iVar1 = FUN_00391588(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_c = 0x10001;
    uVar2 = FUN_003d3a20(auStack_18,&local_c);
    FUN_00356510(iVar1,2,uVar2,1);
  }
  return;
}
