/**
 * FUN_0053b298.c
 * Source line: 780857
 * Body lines: 6
 */
void FUN_0053b298(int param_1)

{
  software_interrupt(WaitSynchronization1);
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_0012f204();
    return;
  }
  return;
}
