/**
 * FUN_001fb5b4.c
 * Source line: 259580
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001fb5b4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1cd0) != '*') {
    *(uint *)(param_1 + 0x1660) = *(uint *)(param_1 + 0x1660) & 0xfffffff7;
    return;
  }
  FUN_002f6e14(param_1 + 0xa10);
  FUN_002f6b14(param_1 + 0xa10);
  *(undefined1 *)(param_1 + 0x1ce2) = 0;
  *(uint *)(param_1 + 0xae4) = *(uint *)(param_1 + 0xae4) & 0xfffffff7;
  uVar1 = FUN_004b4fc0(param_1 + 0x198,"G_btn_00",1);
  FUN_00568630(param_1 + 0x198,param_1 + 0x5f4,uVar1,0);
  FUN_005697e0(0x3f800000,param_1 + 0x5f4);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x198);
}
