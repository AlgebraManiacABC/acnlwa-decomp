/**
 * FUN_002d0d5c.c
 * Source line: 369856
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002d0d5c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f2b58;
  param_1[0x14] = &UNK_008f2bac;
  iVar1 = FUN_004ecbe0(param_1 + 0xc);
  *(undefined **)(iVar1 + -0x30) = &UNK_00881454;
  *(undefined **)(iVar1 + 0x20) = &UNK_008814a8;
  iVar1 = FUN_004ecf70(iVar1 + -0x20);
  iVar1 = thunk_FUN_004ee514(iVar1 + -0xc);
  FUN_002ffb64(iVar1 + -4);
  return;
}
