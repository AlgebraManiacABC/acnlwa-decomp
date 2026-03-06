/**
 * FUN_00778b68.c
 * Source line: 1135480
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00778b68(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008f4940;
  puVar1[0x1a] = &UNK_008f4994;
  iVar2 = FUN_004ecbe0(puVar1 + 0x12);
  *(undefined **)(iVar2 + -0x48) = &UNK_008814e0;
  *(undefined **)(iVar2 + 0x20) = &UNK_008815c0;
  iVar2 = FUN_004ee8c0(iVar2 + -0x18);
  *(undefined **)(iVar2 + -0x30) = &UNK_00881510;
  *(undefined **)(iVar2 + 0x38) = &UNK_00881564;
  iVar2 = FUN_004ecf70(iVar2 + -0x20);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  return iVar2 + -4;
}
