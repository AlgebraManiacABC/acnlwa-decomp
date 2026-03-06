/**
 * FUN_0053b208.c
 * Source line: 780822
 * Body lines: 6
 */
void FUN_0053b208(int param_1)

{
  software_interrupt(ClearEvent);
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_0012f204();
    return;
  }
  return;
}
