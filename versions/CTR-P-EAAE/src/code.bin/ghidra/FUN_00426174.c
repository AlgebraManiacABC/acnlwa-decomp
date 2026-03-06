/**
 * FUN_00426174.c
 * Source line: 589833
 * Body lines: 12
 */
void FUN_00426174(int *param_1)

{
  int iVar1;
  
  thunk_FUN_00135748(param_1 + 5);
  iVar1 = param_1[2];
  if (param_1[4] != iVar1) {
    FUN_0053c024(*param_1 + iVar1,param_1[4] - iVar1);
  }
  if (param_1[4] != param_1[3] && param_1[3] != 0) {
    FUN_0053c024(*param_1);
  }
  FUN_00426144(param_1);
  thunk_FUN_001357ec(param_1 + 5);
  return;
}
