/**
 * FUN_004a64d4.c
 * Source line: 680799
 * Body lines: 15
 */
int * FUN_004a64d4(int *param_1)

{
  int *piVar1;
  
  param_1 = (int *)*param_1;
  piVar1 = param_1;
  if (*param_1 != -0x80000000) {
    if (*param_1 == 0x40000000) {
      piVar1 = NULL;
      if (param_1[3] != 0) {
        piVar1 = (int *)((int)param_1 + param_1[3] + 0xc);
      }
    }
    else {
      piVar1 = NULL;
    }
  }
  return piVar1;
}
