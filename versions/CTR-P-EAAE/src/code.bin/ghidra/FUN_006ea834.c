/**
 * FUN_006ea834.c
 * Source line: 1045802
 * Body lines: 15
 */
#include "../../../include/types.h"

bool FUN_006ea834(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined2 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 extraout_s3;
  undefined2 local_1c [2];
  undefined2 local_18 [2];
  
  local_1c[0] = 0;
  local_18[0] = 0;
  iVar1 = FUN_006e7204(0x3f400000,param_2,param_3,param_1,param_4,0xd,param_5,&DAT_00ae5658,local_1c
                       ,local_18,0,&DAT_008806bc);
  if (iVar1 != 0) {
    *(undefined2 *)(param_4 + 0x49e) = param_6;
    *(undefined4 *)(param_4 + 0x494) = extraout_s3;
    *(undefined1 *)(param_4 + 0x4a4) = param_7;
    *(undefined1 *)(param_4 + 0x4a5) = param_8;
  }
  return iVar1 != 0;
}
