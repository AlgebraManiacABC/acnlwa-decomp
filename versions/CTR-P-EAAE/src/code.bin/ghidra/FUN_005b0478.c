/**
 * FUN_005b0478.c
 * Source line: 861713
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005b0478(int param_1,ushort *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_18 [16];
  
  if (param_3 == 0) {
    puVar1 = (undefined4 *)&DAT_00981684;
  }
  else {
    puVar1 = (undefined4 *)0x98168c;
  }
  FUN_00100ef8(auStack_18,"%03d%s",*param_2 + 100,*puVar1);
  FUN_005b01c0(param_1 + 0xc,8,auStack_18);
  return;
}
