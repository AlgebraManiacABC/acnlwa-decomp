/**
 * FUN_004ca364.c
 * Source line: 709700
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004ca364(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  *(undefined1 *)((int)param_2 + 0x15) = 0;
  param_2[2] = 0;
  uVar1 = FUN_004ce268();
  FUN_004ce594(uVar1,param_2);
  *(undefined1 *)(param_2 + 5) = 0;
  if ((code *)param_2[3] != NULL) {
          // WARNING: Could not recover jumptable at 0x004ca3ac. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)param_2[3])(param_2,3,param_2[4]);
    return;
  }
  return;
}
