/**
 * FUN_00730d64.c
 * Source line: 1087478
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00730d64(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_00730bd0(param_1 + 4);
  lVar3 = FUN_00730bd0(param_2 + 4);
  if ((lVar2 == lVar3) && (*(short *)(param_1 + 0xc) == *(short *)(param_2 + 0xc))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
