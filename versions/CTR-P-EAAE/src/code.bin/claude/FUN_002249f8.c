/**
 * FUN_002249f8.c
 * Source line: 280000
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002249f8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = *(int *)(param_1 + 0xfc);
  *(undefined4 *)(iVar1 + 0x44) = param_2[1];
  *(undefined4 *)(iVar1 + 0x40) = uVar2;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
  return;
}
