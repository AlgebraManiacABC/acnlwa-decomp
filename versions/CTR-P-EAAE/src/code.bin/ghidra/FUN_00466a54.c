/**
 * FUN_00466a54.c
 * Source line: 632953
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00466a54(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 100) = param_1;
  iVar1 = *(int *)(param_2 + 0x68);
  *(undefined4 *)(iVar1 + 0x68) = param_1;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 1;
  return;
}
