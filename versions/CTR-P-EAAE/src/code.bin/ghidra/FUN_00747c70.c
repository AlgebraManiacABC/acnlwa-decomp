/**
 * FUN_00747c70.c
 * Source line: 1103860
 * Body lines: 15
 */
int FUN_00747c70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar2 != 0) break;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return iVar2;
}
