/**
 * FUN_00130690.c
 * Source line: 137139
 * Body lines: 9
 */
void FUN_00130690(int *param_1)

{
  if (cRam0097d801 != '\0') {
    FUN_00136568();
    software_interrupt(CloseHandle);
    if (*param_1 < 0) {
      FUN_00134250();
    }
    cRam0097d801 = '\0';
  }
  return;
}
