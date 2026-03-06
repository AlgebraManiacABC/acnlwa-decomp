/**
 * FUN_005ace98.c
 * Source line: 858916
 * Body lines: 10
 */
size_t FUN_005ace98(void)

{
  if (cRam0097e0e9 == '\0') {
    if (cRam0097e0e6 == '\0') {
      FUN_001017e4(0xaee008,uRam0097e0a0);
      FUN_00101830(0xaee008,&UNK_008b36e8);
      cRam0097e0e6 = '\x01';
    }
    sRam0097e0f8 = wcslen((wchar_t *)0xaee008);
    cRam0097e0e9 = '\x01';
  }
  return sRam0097e0f8;
}
