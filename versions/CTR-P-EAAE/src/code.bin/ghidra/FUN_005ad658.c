/**
 * FUN_005ad658.c
 * Source line: 859235
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005ad658(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 == 0) {
    puVar1 = (undefined4 *)0x981680;
  }
  else {
    puVar1 = (undefined4 *)0x981688;
  }
  FUN_00100f68(param_1,param_2,&UNK_008b3700,*param_3 + 100,*puVar1);
  return;
}
