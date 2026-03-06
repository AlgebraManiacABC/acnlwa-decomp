/**
 * FUN_003d0a70.c
 * Source line: 542470
 * Body lines: 8
 */
int FUN_003d0a70(int param_1)

{
  int *piVar1;
  
  if (cRam0096b8f6 != '\0') {
    piVar1 = (int *)FUN_007d5870(uRam0096b950);
    if (*piVar1 != 0) {
      return *(int *)(param_1 * 0x1b0 + 0xadd980) + *piVar1 * 0xd0;
    }
  }
  return param_1 * 0x1b0 + 0xadd988;
}
