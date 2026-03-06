/**
 * FUN_00645da4.c
 * Source line: 957652
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00645da4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_007559ac(param_3);
  if ((iVar1 == 99) && (iVar1 = FUN_00755a98(param_3), iVar1 == 0)) {
    uVar2 = FUN_002ff6f4(5);
    uVar3 = 1;
    *param_2 = uVar2;
  }
  return uVar3;
}
