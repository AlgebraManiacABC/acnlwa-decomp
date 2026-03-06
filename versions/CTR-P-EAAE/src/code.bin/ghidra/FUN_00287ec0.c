/**
 * FUN_00287ec0.c
 * Source line: 330524
 * Body lines: 8
 */
void FUN_00287ec0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00529c80(0x238,param_1,0);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 != 0) {
    FUN_00694918(_DAT_0094f708,10);
    FUN_00817ff8(param_1 + 0x28,FUN_00287da4,0);
  }
  return;
}
