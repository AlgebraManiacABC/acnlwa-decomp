/**
 * FUN_002d0ba8.c
 * Source line: 369757
 * Body lines: 9
 */
void FUN_002d0ba8(int *param_1)

{
  if (param_1[2] == 0) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) + 8) + 0x6c) != 0)
  {
    FUN_004ecb2c(param_1 + 0xc);
  }
  FUN_004ecec8(param_1 + 4);
          // WARNING: Subroutine does not return
  FUN_004f1270(param_1 + 1);
}
