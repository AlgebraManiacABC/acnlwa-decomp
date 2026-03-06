/**
 * FUN_003e41a4.c
 * Source line: 557818
 * Body lines: 10
 */
int FUN_003e41a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x28) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}
