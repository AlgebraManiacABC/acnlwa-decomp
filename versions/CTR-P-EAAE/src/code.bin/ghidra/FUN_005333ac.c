/**
 * FUN_005333ac.c
 * Source line: 775947
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005333ac(int param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined *local_20;
  char *local_1c;
  
  uVar1 = DAT_00952c5c;
  local_20 = &DAT_009047f8;
  local_1c = "hobj::Fence::Allocator";
  FUN_0031758c(param_1,0x800,DAT_00952c5c,&local_20,1,0);
  FUN_008156fc(param_1 + 8,uVar1,0x7800);
  *(undefined1 *)(param_1 + 0x278) = param_2;
  *(undefined1 *)(param_1 + 0x279) = param_3;
  return;
}
