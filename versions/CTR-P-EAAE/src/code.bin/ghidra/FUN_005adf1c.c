/**
 * FUN_005adf1c.c
 * Source line: 859682
 * Body lines: 10
 */
size_t FUN_005adf1c(void)

{
  if (cRam0097e0e7 == '\0') {
    if (cRam0097e0e4 == '\0') {
      FUN_001017e4(0xaedfdc,uRam0097e0bc);
      FUN_00101830(0xaedfdc,&UNK_008b36e8);
      cRam0097e0e4 = '\x01';
    }
    sRam0097e0f0 = wcslen((wchar_t *)0xaedfdc);
    cRam0097e0e7 = '\x01';
  }
  return sRam0097e0f0;
}
