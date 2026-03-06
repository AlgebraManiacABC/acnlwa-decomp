/**
 * FUN_001a311c.c
 * Source line: 210890
 * Body lines: 8
 */
int FUN_001a311c(void)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 != 1) {
    iVar1 = FUN_006e225c(0);
    return (int)*(short *)(iVar1 + 0x10);
  }
  iVar1 = FUN_006e225c(0x11);
  return (int)*(short *)(iVar1 + 0x10);
}
