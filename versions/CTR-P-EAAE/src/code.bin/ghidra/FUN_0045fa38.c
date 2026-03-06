/**
 * FUN_0045fa38.c
 * Source line: 627455
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0045fa38(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 < 0) {
    iVar2 = -0x1f5eb7d9;
  }
  if ((param_2 < 0 && param_2 != iVar2) && (param_2 != -0x2f5eb7d0)) {
    uVar1 = 0xe0e14826;
  }
  else {
    *(int *)(param_1 + 0x84) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}
