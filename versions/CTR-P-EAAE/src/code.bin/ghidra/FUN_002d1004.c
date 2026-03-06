/**
 * FUN_002d1004.c
 * Source line: 370016
 * Body lines: 9
 */
void FUN_002d1004(int *param_1)

{
  if (param_1[2] == 0) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) + 8) + 0x74) != 0)
  {
    FUN_004ee818(param_1 + 0xc);
  }
  FUN_004ecec8(param_1 + 4);
          // WARNING: Subroutine does not return
  FUN_004f1270(param_1 + 1);
}
