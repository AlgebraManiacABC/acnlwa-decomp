/**
 * FUN_00464d54.c
 * Source line: 631631
 * Body lines: 10
 */
int * FUN_00464d54(int *param_1)

{
  param_1[4] = -1;
  if (param_1[1] != 0) {
    software_interrupt(CloseHandle);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
