/**
 * FUN_00778970.c
 * Source line: 1135372
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00778970(int *param_1)

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
  return iVar2 + -4;
}
