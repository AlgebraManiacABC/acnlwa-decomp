/**
 * FUN_0032127c.c
 * Source line: 424303
 * Body lines: 13
 */
void FUN_0032127c(int *param_1)

{
  if (param_1[2] == 0) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) + 8) + 0x74) != 0)
  {
    FUN_004ee818(param_1 + 0xc);
  }
  if (*(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) + 8) + 0x6c) != 0)
  {
    FUN_004ecb2c(param_1 + 0x12);
  }
  FUN_004ecec8(param_1 + 4);
          // WARNING: Subroutine does not return
  FUN_004f1270(param_1 + 1);
}
