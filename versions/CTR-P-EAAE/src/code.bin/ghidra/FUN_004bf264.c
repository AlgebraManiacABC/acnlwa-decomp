/**
 * FUN_004bf264.c
 * Source line: 701345
 * Body lines: 7
 */
int FUN_004bf264(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    FUN_00136718(param_1 + 0x18);
    return iVar1 + -0x1c;
  }
  return 0;
}
