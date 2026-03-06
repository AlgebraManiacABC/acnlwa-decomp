/**
 * FUN_0053b3e0.c
 * Source line: 780951
 * Body lines: 6
 */
void FUN_0053b3e0(int param_1)

{
  software_interrupt(ReleaseMutex);
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_0012f204();
    return;
  }
  return;
}
