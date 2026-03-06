/**
 * FUN_00779038.c
 * Source line: 1135640
 * Body lines: 8
 */
void FUN_00779038(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0x14);
  if (*(int *)((int)param_1 + iVar1 + 8) != 0) {
    FUN_004ecec8((int)param_1 + iVar1 + 0x10);
          // WARNING: Subroutine does not return
    FUN_004f1270((int)param_1 + iVar1 + 4);
  }
  FUN_002f73b8((int)param_1 + iVar1 + 0x30);
  return;
}
