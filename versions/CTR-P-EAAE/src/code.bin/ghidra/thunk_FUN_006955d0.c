/**
 * thunk_FUN_006955d0.c
 * Source line: 410872
 * Body lines: 6
 */
#include "../../../include/types.h"

void thunk_FUN_006955d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &DAT_0090af48;
  param_1[1] = param_2;
  iVar1 = FUN_00301d0c(param_1 + 2,FUN_003040fc,0xc,10);
  *(undefined4 *)(iVar1 + 0x78) = 0;
  return;
}
