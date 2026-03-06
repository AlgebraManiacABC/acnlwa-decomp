/**
 * FUN_003d64a0.c
 * Source line: 547592
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003d64a0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fbd44;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = FUN_003d0d10(param_1 + 10);
  *(undefined **)(iVar1 + -0x28) = &UNK_008fec6c;
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined2 *)(iVar1 + -0x14) = 0;
  *(undefined2 *)(iVar1 + -0x12) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 1;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0x200;
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -0x20) = 0;
  return;
}
