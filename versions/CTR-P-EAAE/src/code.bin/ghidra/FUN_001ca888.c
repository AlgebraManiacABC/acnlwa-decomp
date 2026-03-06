/**
 * FUN_001ca888.c
 * Source line: 232667
 * Body lines: 8
 */
void FUN_001ca888(int param_1)

{
  FUN_0070e1dc(0x3f800000,param_1,param_1 + 0xc);
  FUN_001c9c10(param_1);
  FUN_001c9df0(param_1);
  if (*(int *)(param_1 + 0x3c) < 1) {
    FUN_001c987c(param_1,0xb);
    return;
  }
  return;
}
