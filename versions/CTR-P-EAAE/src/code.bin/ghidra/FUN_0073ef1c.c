/**
 * FUN_0073ef1c.c
 * Source line: 1097538
 * Body lines: 8
 */
int FUN_0073ef1c(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x4100) {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
