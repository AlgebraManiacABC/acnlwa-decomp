/**
 * FUN_001a1c48.c
 * Source line: 210016
 * Body lines: 8
 */
int FUN_001a1c48(void)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 != 1) {
    iVar1 = FUN_006e225c(0x19);
    return (int)*(short *)(iVar1 + 0x10);
  }
  iVar1 = FUN_006e225c(0x10);
  return (int)*(short *)(iVar1 + 0x10);
}
