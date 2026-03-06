/**
 * FUN_00287e54.c
 * Source line: 330507
 * Body lines: 7
 */
void FUN_00287e54(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00529c80(0x237,param_1,0);
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    FUN_00817ff8(param_1 + 0x28,FUN_00287d58,0);
  }
  return;
}
