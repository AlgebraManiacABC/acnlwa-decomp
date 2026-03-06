/**
 * FUN_002f79c4.c
 * Source line: 389890
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_002f79c4(undefined2 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_002f7a10();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
    uVar2 = (*(code *)(iVar3 + *(int *)(iVar3 + 0x103) + 0x103))(param_1,param_2,param_3);
    return uVar2;
  }
  if (*(char *)(iVar3 + param_2) != '\0') {
    *param_1 = (short)param_2;
    return 1;
  }
  return 0xffffffff;
}
