/**
 * FUN_005a66d4.c
 * Source line: 854211
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005a66d4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00907de8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  iVar1 = FUN_00301d0c(param_1 + 2,FUN_005aa120,0x48,2);
  *(undefined4 *)(iVar1 + 0x94) = 0x20;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined1 *)(iVar1 + -2) = 0;
  *(undefined1 *)(iVar1 + -1) = 0;
  return;
}
