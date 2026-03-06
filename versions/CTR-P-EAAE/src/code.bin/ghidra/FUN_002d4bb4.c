/**
 * FUN_002d4bb4.c
 * Source line: 373071
 * Body lines: 5
 */
void FUN_002d4bb4(int param_1,int param_2,int param_3)

{
  short *psVar1;
  
  if ((-1 < param_3) && (psVar1 = (short *)(param_1 + param_2 * 2), *psVar1 != param_3)) {
    *psVar1 = (short)param_3;
  }
  return;
}
