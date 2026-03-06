/**
 * FUN_005757d4.c
 * Source line: 819608
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_005757d4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = 0;
  uVar2 = _DAT_00ae5660;
  uVar1 = _DAT_00ae565c;
  param_1[1] = _DAT_00ae5658;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = 0;
  iVar3 = FUN_00301d0c(param_1 + 0x1b,FUN_003040fc,0xc,9);
  return iVar3 + -0x6c;
}
