/**
 * FUN_004ee868.c
 * Source line: 736531
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004ee868(undefined4 *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 1) = 2;
  *param_1 = &UNK_00902b5c;
  param_1[2] = 0;
  iVar1 = FUN_005673c8(param_1 + 3);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined **)(iVar1 + -0xc) = &UNK_0090299c;
  return;
}
