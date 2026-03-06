/**
 * FUN_002e60c4.c
 * Source line: 381103
 * Body lines: 12
 */
void FUN_002e60c4(float param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_3 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x168) = param_1;
    *(float *)(iVar1 + 0x16c) = param_2;
    *(float *)(iVar1 + 0x178) = param_1 * *(float *)(iVar1 + 0x15c);
    *(float *)(iVar1 + 0x17c) = param_2 * *(float *)(iVar1 + 0x160);
  }
  return;
}
