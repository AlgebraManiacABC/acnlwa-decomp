/**
 * FUN_002c2228.c
 * Source line: 362416
 * Body lines: 9
 */
int FUN_002c2228(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    if (((uRam0095df70 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x95df70), iVar1 != 0)) {
      bRam0095df60 = 0;
    }
    bRam0095df60 = bRam0095df60 & 0xfe;
    return 0x95df60;
  }
  return param_1 + 0x29;
}
