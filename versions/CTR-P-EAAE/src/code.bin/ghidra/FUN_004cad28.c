/**
 * FUN_004cad28.c
 * Source line: 710269
 * Body lines: 9
 */
int FUN_004cad28(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      FUN_00465d4c();
    }
    iVar1 += 1;
  } while (iVar1 < 2);
  return param_1;
}
