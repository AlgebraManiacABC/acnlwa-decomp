/**
 * FUN_001ff5c0.c
 * Source line: 260625
 * Body lines: 15
 */
void FUN_001ff5c0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x108);
  fVar3 = *(float *)(iVar1 + 0x8c);
  fVar2 = *(float *)(iVar1 + 0x9c);
  fVar4 = *(float *)(iVar1 + 0xac);
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + (*(float *)(param_1 + 0x118) - fVar3);
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + (*(float *)(param_1 + 0x11c) - fVar2);
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x114) + (*(float *)(param_1 + 0x120) - fVar4);
  *(float *)(param_1 + 0x118) = fVar3;
  *(float *)(param_1 + 0x11c) = fVar2;
  *(float *)(param_1 + 0x120) = fVar4;
  return;
}
