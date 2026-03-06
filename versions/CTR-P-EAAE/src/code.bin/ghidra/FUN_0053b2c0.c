/**
 * FUN_0053b2c0.c
 * Source line: 780870
 * Body lines: 6
 */
void FUN_0053b2c0(int param_1)

{
  software_interrupt(SignalEvent);
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_0012f204();
    return;
  }
  return;
}
