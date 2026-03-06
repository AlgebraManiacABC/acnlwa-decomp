/**
 * FUN_002d0db4.c
 * Source line: 369874
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_002d0db4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f2b58;
  param_1[0x14] = &UNK_008f2bac;
  iVar1 = FUN_004ecbe0(param_1 + 0xc);
  *(undefined **)(iVar1 + -0x30) = &UNK_00881454;
  *(undefined **)(iVar1 + 0x20) = &UNK_008814a8;
  iVar1 = FUN_004ecf70(iVar1 + -0x20);
  iVar1 = thunk_FUN_004ee514(iVar1 + -0xc);
  return iVar1 + -4;
}
