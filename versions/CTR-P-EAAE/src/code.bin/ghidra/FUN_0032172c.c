/**
 * FUN_0032172c.c
 * Source line: 424557
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0032172c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f4940;
  param_1[0x1a] = &UNK_008f4994;
  iVar1 = FUN_004ecbe0(param_1 + 0x12);
  *(undefined **)(iVar1 + -0x48) = &UNK_008814e0;
  *(undefined **)(iVar1 + 0x20) = &UNK_008815c0;
  iVar1 = FUN_004ee8c0(iVar1 + -0x18);
  *(undefined **)(iVar1 + -0x30) = &UNK_00881510;
  *(undefined **)(iVar1 + 0x38) = &UNK_00881564;
  iVar1 = FUN_004ecf70(iVar1 + -0x20);
  iVar1 = thunk_FUN_004ee514(iVar1 + -0xc);
  return iVar1 + -4;
}
