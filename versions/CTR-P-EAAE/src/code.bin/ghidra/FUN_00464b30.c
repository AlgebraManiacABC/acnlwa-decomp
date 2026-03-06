/**
 * FUN_00464b30.c
 * Source line: 631507
 * Body lines: 12
 */
void FUN_00464b30(int *param_1)

{
  if ((char)param_1[0x4c7] != '\0') {
    software_interrupt(WaitSynchronization1);
    if (*param_1 < 0) {
      FUN_0012f204();
    }
    software_interrupt(ClearEvent);
    if (*param_1 < 0) {
      FUN_0012f204();
    }
    *(char *)((int)param_1 + 0x131d) = *(char *)((int)param_1 + 0x131d) + '\x01';
  }
  return;
}
