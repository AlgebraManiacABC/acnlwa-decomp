/**
 * FUN_006128e4.c
 * Source line: 926189
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006128e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005b3ec4();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_1 != 0xffff) {
      *(int *)(iVar1 + 0xd7c) = param_1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
