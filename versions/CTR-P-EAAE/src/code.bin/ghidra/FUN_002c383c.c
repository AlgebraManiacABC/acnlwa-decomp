/**
 * FUN_002c383c.c
 * Source line: 363465
 * Body lines: 13
 */
int FUN_002c383c(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(float *)(param_1 + 0xd8) <= *(float *)(param_1 + 0x100)) {
    iVar2 = 0;
  }
  else {
    sVar1 = *(short *)(DAT_0094d764 + 0x20);
    if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0xf4)) {
      sVar1 = -sVar1;
    }
    iVar2 = (int)sVar1;
  }
  return iVar2;
}
