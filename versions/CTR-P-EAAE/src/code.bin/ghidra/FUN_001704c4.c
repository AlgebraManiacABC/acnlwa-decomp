/**
 * FUN_001704c4.c
 * Source line: 187170
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_001704c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00349180(param_1 + 0x138,param_2,param_2,param_2 >> 0x1f);
  *(int *)(param_1 + 0x14) = iVar1;
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)(param_1 + 8) = param_2;
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 0xb;
  *(undefined4 *)(param_1 + 8) = 0xffffff80;
  return 0xb;
}
