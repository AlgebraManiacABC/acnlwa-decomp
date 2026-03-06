/**
 * FUN_0046840c.c
 * Source line: 634127
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0046840c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  puVar1 = (undefined4 *)FUN_003e1d04(auStack_20,*(undefined4 *)(param_1 + 4));
  *puVar1 = &UNK_00901064;
  uVar2 = FUN_00468604(auStack_20,param_2);
  FUN_003e1d9c(auStack_20);
  return uVar2;
}
