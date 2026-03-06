/**
 * FUN_004698bc.c
 * Source line: 635448
 * Body lines: 5
 */
int * FUN_004698bc(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
