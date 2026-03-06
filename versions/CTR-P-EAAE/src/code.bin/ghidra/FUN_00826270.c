/**
 * FUN_00826270.c
 * Source line: 1235551
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00826270(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  
  uVar1 = param_8;
  uVar2 = FUN_00826038(param_1,&local_28,auStack_24,0,0,param_5);
  if (-1 < (int)uVar2) {
    *param_3 = local_28;
    uVar2 = FUN_00350b88(param_3 + 1,&param_6,uVar1);
    if ((-1 < (int)uVar2) &&
       (uVar2 = FUN_008266bc(param_1,param_2,param_4,param_3), (uVar2 & 0x80000000) == 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
