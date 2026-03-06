/**
 * FUN_00515148.c
 * Source line: 757051
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00515148(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  
  if (((*(int *)(param_1 + 0x18) != 0) && (iRam00974a64 != 0)) &&
     (iVar1 = FUN_00733cf0(), iVar1 != 0)) {
    uVar2 = FUN_003d0cbc(auStack_18,&DAT_005151d4);
    FUN_005148a4(param_1,0x65,*(undefined4 *)(param_1 + 0x1c),0x8020000,uVar2);
    FUN_003d0d6c(auStack_18);
  }
  FUN_00510b68(param_1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x28e) = 0;
  return;
}
