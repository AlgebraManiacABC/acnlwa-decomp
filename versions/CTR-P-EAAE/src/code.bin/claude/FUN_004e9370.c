/**
 * FUN_004e9370.c
 * Source line: 731136
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004e9370(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x304);
  }
  *param_1 = uVar1;
  return;
}
