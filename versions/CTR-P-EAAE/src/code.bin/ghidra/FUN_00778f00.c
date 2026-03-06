/**
 * FUN_00778f00.c
 * Source line: 1135568
 * Body lines: 10
 */
void FUN_00778f00(int *param_1)

{
  param_1 = (int *)(*(int *)(*param_1 + -0x14) + (int)param_1);
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
