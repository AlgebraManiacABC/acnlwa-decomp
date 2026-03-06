/**
 * FUN_003355ac.c
 * Source line: 436064
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003355ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  
  FUN_0020c118();
  FUN_0024dbb0(param_1 + 4,param_3);
  FUN_00311c70(param_1 + 0x1f70,param_4);
  param_1[2] = (int)((ulonglong)param_5 >> 0x20);
  param_1[3] = (int)param_5;
  *param_1 = 0x700009e;
  FUN_00582bc0(param_1 + 0x48e);
  uVar1 = FUN_003193e8(param_1 + 2,0x7dc0,0xffffffff);
  param_1[1] = uVar1;
  return;
}
