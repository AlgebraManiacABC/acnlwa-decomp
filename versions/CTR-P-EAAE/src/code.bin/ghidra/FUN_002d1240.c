/**
 * FUN_002d1240.c
 * Source line: 370158
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002d1240(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f2bf4;
  param_1[0x12] = &UNK_008f2c48;
  iVar1 = FUN_004ee8c0(param_1 + 0xc);
  *(undefined **)(iVar1 + -0x30) = &UNK_008813c8;
  *(undefined **)(iVar1 + 0x18) = &UNK_0088141c;
  iVar1 = FUN_004ecf70(iVar1 + -0x20);
  iVar1 = thunk_FUN_004ee514(iVar1 + -0xc);
  FUN_002ffb64(iVar1 + -4);
  return;
}
