/**
 * FUN_0076689c.c
 * Source line: 1124695
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0076689c(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_0075d6a4(param_1 + (param_4 & 0xf) * 0xa0 + (param_3 & 0xf) * 10 + 0x1c,param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = param_3 * 0x20 + *(int *)(param_1 + 8) + 0x10;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
  iVar2 = param_4 * 0x20 + iVar2 + 0x10;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + iVar1;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + iVar2;
  *(int *)(param_2 + 0x24) = iVar1 + *(int *)(param_2 + 0x24);
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + iVar2;
  return;
}
