/**
 * FUN_00360ed4.c
 * Source line: 465514
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00360ed4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  
  FUN_00360d24(param_1,0x20);
  uVar2 = extraout_r3;
  if (*(char *)(param_1 + 0x211) != '\0') {
    FUN_00101830(*(undefined4 *)(param_1 + 0xc),&UNK_0089a878);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    uVar2 = extraout_r3_00;
  }
  iVar1 = FUN_00100f68(*(undefined4 *)(param_1 + 0xc),0x20,&UNK_0089a880,uVar2,param_2,0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}
