/**
 * FUN_00427938.c
 * Source line: 591302
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_00427938(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_009004f8;
  iVar1 = FUN_004278c0(param_1);
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}
