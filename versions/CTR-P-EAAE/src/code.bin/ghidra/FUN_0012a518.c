void FUN_0012a518(void)

{
  if (iRam0097d7f4 != 0) {
    software_interrupt(WaitSynchronization1);
    if (iRam0097d7f4 < 0) {
      FUN_0012f204();
    }
  }
  FUN_00120208();
  return;
}
