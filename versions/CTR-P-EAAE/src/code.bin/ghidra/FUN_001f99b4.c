/**
 * FUN_001f99b4.c
 * Source line: 258901
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001f99b4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4bc);
  uVar2 = param_2[1];
  *(undefined4 *)(iVar1 + 0x28) = *param_2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
