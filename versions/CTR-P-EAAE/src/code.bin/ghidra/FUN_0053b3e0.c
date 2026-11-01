void FUN_0053b3e0(int param_1)

{
  software_interrupt(ReleaseMutex);
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_0012f204();
    return;
  }
  return;
}
