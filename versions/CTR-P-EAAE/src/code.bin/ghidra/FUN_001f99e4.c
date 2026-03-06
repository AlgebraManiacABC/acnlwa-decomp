/**
 * FUN_001f99e4.c
 * Source line: 258919
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001f99e4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x4bc);
  *(undefined4 *)(iVar1 + 0x30) = param_2[2];
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
