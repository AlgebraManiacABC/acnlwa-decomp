/**
 * FUN_001a61ac.c
 * Source line: 212642
 * Body lines: 15
 */
void FUN_001a61ac(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float local_28;
  float local_24;
  float fStack_20;
  
  fStack_20 = param_2[2] - *(float *)(param_1 + 0x11c);
  local_28 = *param_2 - *(float *)(param_1 + 0x114);
  local_24 = param_2[1] - *(float *)(param_1 + 0x118);
  fVar2 = SQRT(local_28 * local_28 + local_24 * local_24 + fStack_20 * fStack_20) - 16.0;
  if ((0.0 < fVar2) && (iVar1 = FUN_0056a178(&local_28), iVar1 != 0)) {
    *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x114) + local_28 * fVar2;
    *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x118) + local_24 * fVar2;
    *(float *)(param_1 + 0x11c) = *(float *)(param_1 + 0x11c) + fStack_20 * fVar2;
  }
  return;
}
