/**
 * FUN_00537e0c.c
 * Source line: 779095
 * Body lines: 11
 */
int FUN_00537e0c(int *param_1)

{
  int iVar1;
  
  FUN_001435c8(param_1 + 1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_005380a8(iVar1);
    FUN_0053814c(iVar1);
    *param_1 = 0;
  }
  FUN_001435c8();
  iVar1 = FUN_00143604(param_1 + 1);
  return iVar1 + -4;
}
