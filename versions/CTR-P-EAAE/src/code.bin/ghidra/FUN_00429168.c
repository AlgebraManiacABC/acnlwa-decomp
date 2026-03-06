/**
 * FUN_00429168.c
 * Source line: 592792
 * Body lines: 6
 */
void FUN_00429168(int param_1,int *param_2)

{
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}
