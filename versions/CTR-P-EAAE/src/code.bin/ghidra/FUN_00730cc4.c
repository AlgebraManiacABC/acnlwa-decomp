/**
 * FUN_00730cc4.c
 * Source line: 1087437
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00730cc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(short *)(param_1 + 0xc) != 0) || (iVar1 = FUN_00730bec(param_1 + 4), uVar2 = 0, iVar1 != 0)
     ) {
    uVar2 = 1;
  }
  return uVar2;
}
