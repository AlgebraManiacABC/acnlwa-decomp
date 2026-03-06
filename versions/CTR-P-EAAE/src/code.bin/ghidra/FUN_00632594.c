/**
 * FUN_00632594.c
 * Source line: 948778
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00632594(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_1c [16];
  
  iVar1 = FUN_0070ac68(*(int *)(param_2 + 0x68),auStack_1c,
                       *(undefined4 *)(*(int *)(param_2 + 0x68) + 0xb4),1);
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x28) != 0) &&
        (*(int *)(param_1 + 0x2c) == *(int *)(*(int *)(param_1 + 0x28) + 0xc))) &&
       (*(int *)(param_1 + 0x34) == param_3)) {
      FUN_002e66c0(param_1 + 0x1c,auStack_1c,&DAT_00975bee,&DAT_00ae5664,1);
      return;
    }
    FUN_002073dc(param_1 + 0x1c,param_3,auStack_1c,&DAT_00975bee,&DAT_00ae5664,1,0);
    *(int *)(param_1 + 0x34) = param_3;
  }
  return;
}
