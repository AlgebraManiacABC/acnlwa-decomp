/**
 * FUN_0011fe48.c
 * Source line: 122834
 * Body lines: 13
 */
int FUN_0011fe48(void)

{
  int iVar1;
  
  iVar1 = iRam0097d7f8;
  if (iRam0097d7f8 == 0) {
    iVar1 = -0x1f5f3008;
  }
  else {
    software_interrupt(CloseHandle);
    iRam0097d7f8 = 0;
  }
  if (iVar1 < 0) {
    FUN_001292e8(iVar1,0x11fe7c);
  }
  return iVar1;
}
