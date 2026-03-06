/**
 * FUN_0051be74.c
 * Source line: 761097
 * Body lines: 13
 */
void FUN_0051be74(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x380);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x90);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    return;
  }
  FUN_0051b8b4(param_1,&UNK_0051b7dc,0);
  FUN_0051b624(param_1);
  return;
}
