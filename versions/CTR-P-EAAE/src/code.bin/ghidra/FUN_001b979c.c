/**
 * FUN_001b979c.c
 * Source line: 223742
 * Body lines: 10
 */
void FUN_001b979c(void)

{
  if (DAT_00951480 != '\x02') {
    if (DAT_00951480 == '\0') {
      return;
    }
    if ((DAT_00951480 == '\x01') && (cRam00951481 != '\0')) {
      FUN_001b88c0();
      return;
    }
  }
  return;
}
