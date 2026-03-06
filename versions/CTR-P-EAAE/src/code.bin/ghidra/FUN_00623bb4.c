/**
 * FUN_00623bb4.c
 * Source line: 937318
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00623bb4(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 4;
  iVar1 = FUN_00624c90(param_1 + 8);
  *(undefined **)(iVar1 + -4) = &UNK_0090ac18;
  iVar1 = FUN_00624c90(iVar1 + 8);
  *(undefined **)(iVar1 + -4) = &UNK_0090ac18;
  iVar1 = FUN_00624c90(iVar1 + 8);
  *(undefined **)(iVar1 + -4) = &UNK_0090ac18;
  iVar1 = FUN_001ae1e4(iVar1 + 4);
  *(undefined1 *)(iVar1 + 0x2520) = 0;
  *(undefined1 *)(iVar1 + 0x2521) = 0;
  *(undefined1 *)(iVar1 + 0x2522) = 0;
  *(undefined1 *)(iVar1 + 0x2523) = 0;
  return;
}
