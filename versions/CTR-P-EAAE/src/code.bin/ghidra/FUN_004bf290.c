/**
 * FUN_004bf290.c
 * Source line: 701360
 * Body lines: 4
 */
void FUN_004bf290(int param_1,int param_2)

{
  *(int *)(param_2 + 8) = param_1;
  FUN_0013e7d8(param_1 + 0x18,param_1 + 0x1c,param_2 + 0x1c);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}
