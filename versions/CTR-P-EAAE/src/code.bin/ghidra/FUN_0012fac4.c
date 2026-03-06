/**
 * FUN_0012fac4.c
 * Source line: 136395
 * Body lines: 9
 */
int FUN_0012fac4(void)

{
  FUN_0012f278();
  if (iRam0097e004 != 0) {
    software_interrupt(CloseHandle);
    if (iRam0097e004 < 0) {
      return iRam0097e004;
    }
    iRam0097e004 = 0;
  }
  return 0;
}
