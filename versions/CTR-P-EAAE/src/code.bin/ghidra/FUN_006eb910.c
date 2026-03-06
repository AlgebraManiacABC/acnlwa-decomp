/**
 * FUN_006eb910.c
 * Source line: 1046029
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006eb910(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  
  local_10[0] = 0;
  local_14[0] = 0;
  iVar1 = FUN_006e7204(0x3f400000,0,param_1,0x1a,param_2,&DAT_00ae5658,local_14,local_10,0,
                       &DAT_008806c4);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x49e) = param_3;
  }
  return iVar1 != 0;
}
