/**
 * FUN_006ea7ac.c
 * Source line: 1045783
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006ea7ac(int param_1,undefined4 param_2,Item_t *param_3)

{
  int iVar1;
  undefined2 local_18 [2];
  undefined2 local_14 [4];
  
  local_18[0] = 0;
  local_14[0] = 0;
  iVar1 = FUN_006e7204(0x3f400000,0x40c00000,param_1,0x11,param_2,&DAT_00ae5658,local_18,local_14,0,
                       &DAT_008806bc);
  if (iVar1 != 0) {
    Item_Copy((Item_t *)(param_1 + 0x4a0),param_3);
  }
  return iVar1 != 0;
}
