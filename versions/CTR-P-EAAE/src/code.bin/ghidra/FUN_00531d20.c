/**
 * FUN_00531d20.c
 * Source line: 775095
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00531d20(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined *local_18;
  char *local_14;
  
  uVar1 = DAT_00952c5c;
  local_18 = &DAT_009047f8;
  local_14 = "hobj::Post::Allocator";
  FUN_0031758c(param_1,0x2000,DAT_00952c5c,&local_18,1,0);
  FUN_008156fc(param_1 + 8,uVar1,0x5400);
  *(undefined1 *)(param_1 + 0x2c4) = param_2;
  return;
}
