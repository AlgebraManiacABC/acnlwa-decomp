/**
 * FUN_003e4198.c
 * Source line: 557800
 * Body lines: 10
 */
int FUN_003e4198(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  while( true ) {
    if (iVar1 == param_1 + 0x8c) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x28) == *(int *)(param_2 + 0x1c)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}
