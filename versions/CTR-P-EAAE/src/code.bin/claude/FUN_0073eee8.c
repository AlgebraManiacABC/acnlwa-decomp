/**
 * FUN_0073eee8.c
 * Source line: 1097508
 * Body lines: 8
 */
int FUN_0073eee8(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x300) {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
