/**
 * FUN_0071ebf4.c
 * Source line: 1076281
 * Body lines: 9
 */
int FUN_0071ebf4(int param_1,int param_2)

{
  short sVar1;
  
  if ((param_2 != 0) || (*(float *)(param_1 + 0x100) < *(float *)(param_1 + 0xd8))) {
    sVar1 = FUN_00565cc0(*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0xf4),
                         *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xfc));
  }
  else {
    sVar1 = *(short *)(param_1 + 0x3a);
  }
  return (int)sVar1;
}
