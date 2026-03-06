/**
 * FUN_00730b74.c
 * Source line: 1087343
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00730b74(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  FUN_00428d98(param_2,"%d.%d.%d.%d:%d",uVar1 >> 0x18,(uVar1 & 0xff0000) >> 0x10,
               (uVar1 & 0xff00) >> 8,uVar1 & 0xff,(short)param_1[1]);
  return;
}
