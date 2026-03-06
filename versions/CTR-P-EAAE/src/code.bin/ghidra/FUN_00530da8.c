/**
 * FUN_00530da8.c
 * Source line: 774592
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00530da8(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *local_20;
  char *local_1c;
  
  uVar1 = DAT_00952c5c;
  local_20 = &DAT_009047f8;
  local_1c = "hobj::Door::Allocator";
  FUN_0031758c(param_1,0x1400,DAT_00952c5c,&local_20,1,0);
  FUN_008156fc(param_1 + 0x2c,uVar1,0x4000);
  *(undefined1 *)(param_1 + 0x290) = param_2;
  *(undefined1 *)(param_1 + 0x291) = param_3;
  FUN_002d5b40(param_1 + 0x2a4,param_4);
  return;
}
