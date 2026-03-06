/**
 * FUN_002244a4.c
 * Source line: 279791
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002244a4(int param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_2[1];
  fVar3 = *(float *)(param_1 + 0x108);
  uVar2 = *(undefined4 *)(param_1 + 0x10c);
  iVar1 = *(int *)(param_1 + 0xfc);
  *(float *)(iVar1 + 0x28) = *(float *)(param_1 + 0x104) + *param_2;
  *(float *)(iVar1 + 0x2c) = fVar3 + fVar4;
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
  return;
}
