/**
 * FUN_003fc5f8.c
 * Source line: 567700
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_003fc5f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  iVar1 = FUN_003fe87c(param_1,&local_10);
  if ((iVar1 != 0) && (*(char *)(local_10 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}
