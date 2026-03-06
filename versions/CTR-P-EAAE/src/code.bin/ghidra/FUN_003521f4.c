/**
 * FUN_003521f4.c
 * Source line: 453965
 * Body lines: 5
 */
int * FUN_003521f4(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
