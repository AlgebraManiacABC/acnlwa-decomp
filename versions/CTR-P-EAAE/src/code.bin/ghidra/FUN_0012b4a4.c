/**
 * FUN_0012b4a4.c
 * Source line: 132344
 * Body lines: 11
 */
void FUN_0012b4a4(void)

{
  int iVar1;
  
  iVar1 = iRam009535e0;
  if (iRam009535e0 != 0) {
    if (*(int *)(iRam009535e0 + 0xc) != 0) {
      software_interrupt(CloseHandle);
      *(int *)(iRam009535e0 + 0xc) = 0;
    }
    FUN_002ffb64(iVar1);
    iRam009535e0 = 0;
  }
  return;
}
