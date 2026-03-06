/**
 * FUN_004c5aa0.c
 * Source line: 706019
 * Body lines: 9
 */
int * FUN_004c5aa0(int *param_1)

{
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    FUN_004c5a30(param_1);
  }
  FUN_00135888(param_1);
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  return param_1;
}
