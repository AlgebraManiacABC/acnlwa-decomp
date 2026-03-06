/**
 * FUN_004b71c8.c
 * Source line: 695253
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004b71c8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(byte *)(param_1 + 0xb7) = *(byte *)(param_1 + 0xb7) & 0xcf;
  return;
}
