/**
 * FUN_00461fa4.c
 * Source line: 629324
 * Body lines: 11
 */
int FUN_00461fa4(int param_1)

{
  FUN_00135888();
  if (*(int *)(param_1 + 0x18) != 0) {
    software_interrupt(CloseHandle);
    *(int *)(param_1 + 0x18) = 0;
  }
  FUN_00135888();
  if (*(int *)(param_1 + 0x10) != 0) {
    software_interrupt(CloseHandle);
    *(int *)(param_1 + 0x10) = 0;
  }
  return param_1;
}
