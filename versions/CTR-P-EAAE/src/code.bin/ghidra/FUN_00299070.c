/**
 * FUN_00299070.c
 * Source line: 339165
 * Body lines: 8
 */
void FUN_00299070(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x750) - *(int *)(param_1 + 0x74c)) + 1;
  *(int *)(param_1 + 0x720) = iVar1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x720) = iVar1;
  return;
}
