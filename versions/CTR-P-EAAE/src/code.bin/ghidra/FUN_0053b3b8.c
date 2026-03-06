/**
 * FUN_0053b3b8.c
 * Source line: 780938
 * Body lines: 6
 */
void FUN_0053b3b8(int param_1)

{
  software_interrupt(WaitSynchronization1);
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_0012f204();
    return;
  }
  return;
}
