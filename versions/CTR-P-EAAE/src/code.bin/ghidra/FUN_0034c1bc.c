/**
 * FUN_0034c1bc.c
 * Source line: 448689
 * Body lines: 5
 */
int * FUN_0034c1bc(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
