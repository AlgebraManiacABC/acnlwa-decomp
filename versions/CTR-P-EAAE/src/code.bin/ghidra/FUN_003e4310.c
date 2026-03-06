/**
 * FUN_003e4310.c
 * Source line: 557894
 * Body lines: 11
 */
int FUN_003e4310(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    if ((*(int *)(iVar1 + 0x14) == *(int *)(param_2 + 8)) &&
       (*(int *)(iVar1 + 0x28) == *(int *)(param_2 + 0x1c))) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}
