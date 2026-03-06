/**
 * FUN_00778a18.c
 * Source line: 1135408
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00778a18(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008f4170;
  puVar1[0xd] = &UNK_008f41bc;
  iVar2 = FUN_004ecbe0(puVar1 + 4);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  return iVar2 + -4;
}
