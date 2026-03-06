/**
 * FUN_0011cfe4.c
 * Source line: 120094
 * Body lines: 12
 */
void FUN_0011cfe4(void)

{
  int iVar1;
  
  iRam00974f18 = FUN_0011de28();
  iRam00974f18 *= 10;
  iRam00974f1c = iRam00974f18 >> 0x1f;
  iVar1 = FUN_0011ddb0();
  if (iVar1 != 0) {
    cRam00974f01 = '\x01';
  }
  if ((cRam00974f01 != '\0') || (iRam00974f1c != 0 || iRam00974f18 != 0)) {
    uRam00974f00 = 1;
  }
  return;
}
