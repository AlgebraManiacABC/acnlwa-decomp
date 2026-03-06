/**
 * FUN_00748284.c
 * Source line: 1104200
 * Body lines: 7
 */
void FUN_00748284(int *param_1,int *param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (int)param_2;
  param_1[1] = (int)(param_2 + 2);
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}
