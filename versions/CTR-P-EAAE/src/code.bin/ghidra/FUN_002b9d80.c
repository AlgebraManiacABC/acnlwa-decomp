/**
 * FUN_002b9d80.c
 * Source line: 356168
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002b9d80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(*(int *)(param_1 + 0x4a8) + 0x2c);
  iVar1 = FUN_0056878c(param_1 + 0x270,*(undefined4 *)(param_2 * 4 + 0x9532f8));
  uVar3 = *(undefined4 *)(iVar1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x4b8);
  fVar4 = *(float *)(iVar1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  *(float *)(iVar2 + 0x2c) = fVar4 + fVar5;
  *(undefined4 *)(iVar2 + 0x30) = uVar3;
  *(byte *)(iVar2 + 0xb7) = *(byte *)(iVar2 + 0xb7) & 0xcf;
  return;
}
