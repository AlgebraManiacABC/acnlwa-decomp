/**
 * FUN_0077890c.c
 * Source line: 1135352
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0077890c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008f2bf4;
  puVar1[0x12] = &UNK_008f2c48;
  iVar2 = FUN_004ee8c0(puVar1 + 0xc);
  *(undefined **)(iVar2 + -0x30) = &UNK_008813c8;
  *(undefined **)(iVar2 + 0x18) = &UNK_0088141c;
  iVar2 = FUN_004ecf70(iVar2 + -0x20);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  FUN_002ffb64(iVar2 + -4);
  return;
}
