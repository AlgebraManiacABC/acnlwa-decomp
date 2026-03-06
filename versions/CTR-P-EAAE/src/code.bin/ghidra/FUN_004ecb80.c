/**
 * FUN_004ecb80.c
 * Source line: 734109
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004ecb80(undefined4 *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 1) = 2;
  *param_1 = &UNK_00902b5c;
  param_1[2] = 0;
  iVar1 = FUN_005673c8(param_1 + 3);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined **)(iVar1 + -0xc) = &UNK_009028e8;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  return;
}
