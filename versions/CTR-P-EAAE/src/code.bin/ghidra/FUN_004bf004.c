/**
 * FUN_004bf004.c
 * Source line: 701172
 * Body lines: 8
 */
void FUN_004bf004(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_004c490c(param_2);
  if (iVar1 != 0) {
    FUN_004c48c4(*param_1);
  }
  *(int **)(*param_1 + 0xc) = param_1;
  return;
}
