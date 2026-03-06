/**
 * FUN_005ea964.c
 * Source line: 899338
 * Body lines: 10
 */
#include "../../../include/types.h"

FUN_005ea964(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00312a4c(DAT_0095debc,param_1 + 0x28,param_3,param_4);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_005ec73c(*(undefined4 *)(param_1 + 0x18),param_2,param_1 + 0x28,param_5),
     iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
