/**
 * FUN_0015916c.c
 * Source line: 171844
 * Body lines: 12
 */
void FUN_0015916c(void)

{
  if (cRam0095e307 == '\0') {
    if (cRam0095e306 != '\0') {
      nn::svc::SleepThread(16000000);
      cRam0095e306 = '\0';
    }
  }
  FUN_00163928();
  uRam00ae56c4 = 0;
  uRam00ae56c8 = 0;
  uRam00ae56cc = 0;
  __rt_memclr_w(0xae56d0,0x80);
  return;
}
