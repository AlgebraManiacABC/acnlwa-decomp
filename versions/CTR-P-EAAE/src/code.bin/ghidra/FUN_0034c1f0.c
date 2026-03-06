/**
 * FUN_0034c1f0.c
 * Source line: 448701
 * Body lines: 5
 */
int * FUN_0034c1f0(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
