/**
 * FUN_004deaec.c
 * Source line: 724127
 * Body lines: 11
 */
int FUN_004deaec(void)

{
  int iVar1;
  
  if ((DAT_00953564._3_1_ & 1) != 0) {
    if (*(int *)(iRam0094d090 + 0x38) == 2) {
      iVar1 = (int)*(short *)(iRam0094d090 + 0x628);
    }
    else {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}
