/**
 * FUN_0058d9f8.c
 * Source line: 838492
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_0058d9f8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[0x12] = 0x1e;
  puVar1 = (undefined4 *)FUN_002fb378();
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  param_1[2] = puVar1[2];
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return param_1;
}
