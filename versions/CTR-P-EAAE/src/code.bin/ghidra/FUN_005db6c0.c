/**
 * FUN_005db6c0.c
 * Source line: 887531
 * Body lines: 12
 */
#include "../../../include/types.h"

FUN_005db6c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_007559a0(param_3);
  FUN_00755ab4(param_3,&uStack_10);
  uVar2 = 1;
  if ((_DAT_00aaf14c != 0) && (iVar1 = FUN_00303660(_DAT_00aaf14c + 0x8d1c), iVar1 != 0)) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return 1;
}
