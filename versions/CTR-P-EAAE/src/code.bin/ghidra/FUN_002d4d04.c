void FUN_002d4d04(int param_1,int param_2)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + param_2 * 2);
  *psVar1 = *psVar1 + 1;
  FUN_002d4bf4();
  return;
}
