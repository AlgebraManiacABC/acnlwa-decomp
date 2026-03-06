/**
 * FUN_001e8d58.c
 * Source line: 250661
 * Body lines: 4
 */
int FUN_001e8d58(float param_1,float param_2)

{
  short sVar1;
  
  param_2 = param_2 * 0.5;
  sVar1 = FUN_00565cc0(param_2,SQRT(param_1 * param_1 - param_2 * param_2));
  return (int)(short)(sVar1 << 1);
}
