/**
 * FUN_00480470.c
 * Source line: 652533
 * Body lines: 10
 */
void FUN_00480470(void)

{
  int iVar1;
  
  FUN_0012a17c(0xe);
  while( true ) {
    FUN_0012a518();
    iVar1 = FUN_00480d1c();
    FUN_0012ab78();
    if ((iVar1 != -0x375f3010 && iVar1 != -0x1f5f33f8) && iVar1 != -0x375f33fe) break;
    nn::svc::SleepThread(10000000);
  }
  return;
}
