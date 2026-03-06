/**
 * FUN_002d4d18.c
 * Source line: 373245
 * Body lines: 9
 */
void FUN_002d4d18(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 + param_2 * 2);
  sVar1 = *psVar2;
  if (0 < sVar1) {
    *psVar2 = sVar1 + -1;
  }
  FUN_002d4bf4();
  return;
}
