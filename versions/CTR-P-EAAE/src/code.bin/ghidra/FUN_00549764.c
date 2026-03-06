/**
 * FUN_00549764.c
 * Source line: 790491
 * Body lines: 14
 */
void FUN_00549764(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x228) = param_2;
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_0074bf70();
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x228);
    *(int *)(iVar2 + 0x28) = param_1;
    *(int *)(iVar2 + 0x2c) = iVar1;
    return;
  }
  return;
}
