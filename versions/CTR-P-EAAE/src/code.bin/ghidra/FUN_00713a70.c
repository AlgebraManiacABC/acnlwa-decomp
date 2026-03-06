/**
 * FUN_00713a70.c
 * Source line: 1068777
 * Body lines: 6
 */
int FUN_00713a70(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x18), iVar1 != 0)) {
    return iVar1 + 0x1b0;
  }
  return 0;
}
