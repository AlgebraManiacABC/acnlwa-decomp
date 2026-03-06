/**
 * FUN_0044d588.c
 * Source line: 613762
 * Body lines: 8
 */
void FUN_0044d588(int *param_1)

{
  int iVar1;
  
  param_1[2] = ((int *)*param_1)[3];
  iVar1 = param_1[2] - param_1[1];
  param_1[3] = iVar1;
  if (iVar1 < 0) {
    param_1[3] = iVar1 + *(int *)*param_1;
  }
  return;
}
