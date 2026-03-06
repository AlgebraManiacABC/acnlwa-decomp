/**
 * FUN_0034f0b8.c
 * Source line: 450968
 * Body lines: 5
 */
int FUN_0034f0b8(void)

{
  if (iRam0097ea20 != 0) {
    software_interrupt(0x23);
    return iRam0097ea20;
  }
  return -0x1f7ef408;
}
