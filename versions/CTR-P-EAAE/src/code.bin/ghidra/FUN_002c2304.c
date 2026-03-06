/**
 * FUN_002c2304.c
 * Source line: 362433
 * Body lines: 10
 */
int FUN_002c2304(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (((uRam0095df6c & 1) == 0) && (iVar1 = FUN_002fe7dc(0x95df6c), iVar1 != 0)) {
      FUN_00779598(0x95df78);
      FUN_002bb4b0(0x95df78);
    }
    FUN_002bb4b0(0x95df78);
    return 0x95df78;
  }
  return param_1 + 0x22;
}
