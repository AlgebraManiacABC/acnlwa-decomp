/**
 * FUN_0075b170.c
 * Source line: 1116230
 * Body lines: 14
 */
int FUN_0075b170(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    iVar1 = *(int *)(param_1 + 0x5e0);
  }
  else {
    iVar1 = 0;
    while ((float)(&DAT_00891848)[iVar1] <= *(float *)(param_1 + 0x610)) {
      iVar1 += 1;
      if (6 < iVar1) {
        return 7;
      }
    }
  }
  return iVar1;
}
