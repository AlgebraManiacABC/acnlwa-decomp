/**
 * FUN_005add7c.c
 * Source line: 859620
 * Body lines: 10
 */
size_t FUN_005add7c(void)

{
  if (cRam0097e0e8 == '\0') {
    if (cRam0097e0e5 == '\0') {
      FUN_001017e4(0xaedff2,uRam0097e0b8);
      FUN_00101830(0xaedff2,&UNK_008b36e8);
      cRam0097e0e5 = '\x01';
    }
    sRam0097e0f4 = wcslen((wchar_t *)0xaedff2);
    cRam0097e0e8 = '\x01';
  }
  return sRam0097e0f4;
}
