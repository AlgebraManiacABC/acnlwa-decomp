/**
 * FUN_00120364.c
 * Source line: 123157
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00120364(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00904840;
  param_1[1] = 0;
  iVar1 = FUN_0012bfec(param_1 + 2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return;
}
