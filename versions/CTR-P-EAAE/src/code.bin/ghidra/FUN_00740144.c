/**
 * FUN_00740144.c
 * Source line: 1098518
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00740144(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00141728(*(undefined4 *)(param_1 + 0x3c));
  uVar3 = 0;
  if ((iVar1 != 0) && (puVar2 = (undefined4 *)FUN_0073f70c(), uVar3 = 0, puVar2 != NULL)) {
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar2 + 2);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)((int)puVar2 + 9);
    uVar3 = 1;
  }
  return uVar3;
}
