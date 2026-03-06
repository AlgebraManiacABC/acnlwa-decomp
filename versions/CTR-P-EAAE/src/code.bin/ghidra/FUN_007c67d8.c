/**
 * FUN_007c67d8.c
 * Source line: 1171480
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 * FUN_007c67d8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_20 [16];
  
  FUN_001c4c14(auStack_20,*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x9f4) * 4 + 0x9e8));
  if ((((-1 < param_3) &&
       (iVar1 = *(int *)(param_1 + 0x6b4c) * 8, param_3 < *(int *)(&UNK_008495ec + iVar1))) &&
      (-1 < param_2)) &&
     ((param_2 < *(int *)(&DAT_008495e8 + iVar1) &&
      (uVar2 = FUN_0070d904(auStack_20,param_2,param_3), (~uVar2 & 0xf) != 0)))) {
    FUN_001c4bf4(auStack_20,param_2,param_3,*(undefined2 *)(param_1 + 0x9e6));
  }
  return auStack_20;
}
