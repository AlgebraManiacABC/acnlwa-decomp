/**
 * FUN_0053d284.c
 * Source line: 782362
 * Body lines: 9
 */
void FUN_0053d284(int *param_1)

{
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != NULL) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
