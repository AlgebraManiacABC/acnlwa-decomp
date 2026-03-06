/**
 * FUN_006eb990.c
 * Source line: 1046048
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006eb990(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  
  local_10[0] = 0;
  local_14[0] = 0;
  iVar1 = FUN_006e7204(0x3f400000,param_1,param_2,0xc,param_3,&DAT_00ae5658,local_14,local_10,0,
                       &DAT_008806bc);
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 0x49d) = param_4;
  }
  return iVar1 != 0;
}
