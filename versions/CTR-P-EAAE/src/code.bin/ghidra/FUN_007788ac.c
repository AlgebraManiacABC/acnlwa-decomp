/**
 * FUN_007788ac.c
 * Source line: 1135333
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_007788ac(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008f2b58;
  puVar1[0x14] = &UNK_008f2bac;
  iVar2 = FUN_004ecbe0(puVar1 + 0xc);
  *(undefined **)(iVar2 + -0x30) = &UNK_00881454;
  *(undefined **)(iVar2 + 0x20) = &UNK_008814a8;
  iVar2 = FUN_004ecf70(iVar2 + -0x20);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  return iVar2 + -4;
}
