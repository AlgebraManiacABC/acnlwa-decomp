/**
 * FUN_00584080.c
 * Source line: 830774
 * Body lines: 8
 */
void FUN_00584080(void)

{
  FUN_00584150(0x98a018);
  if ((uRam0098a050 & 4) == 0) {
    uRam0098a048 |= 4;
  }
  else {
    uRam0098a050 &= 0xfffffffb;
  }
  return;
}
