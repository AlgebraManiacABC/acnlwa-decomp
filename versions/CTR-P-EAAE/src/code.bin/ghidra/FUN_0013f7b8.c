/**
 * FUN_0013f7b8.c
 * Source line: 151962
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0013f7b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((char)param_1[3] == '\0') ||
     (iVar3 = *param_1, iVar1 = FUN_001416bc(iVar3), *(int *)(iVar3 + iVar1) != 0x54415743)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
