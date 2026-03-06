/**
 * FUN_0034c2dc.c
 * Source line: 448746
 * Body lines: 6
 */
int * FUN_0034c2dc(int *param_1)

{
  FUN_00135888();
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
