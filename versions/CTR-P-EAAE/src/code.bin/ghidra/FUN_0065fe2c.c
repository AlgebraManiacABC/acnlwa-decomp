/**
 * FUN_0065fe2c.c
 * Source line: 970340
 * Body lines: 11
 */
void FUN_0065fe2c(int param_1)

{
  FUN_001d1cd0(0x3f800000,param_1 + 0x1b4);
  if ((*(int *)(param_1 + 0xaa4) != 0) &&
     (*(int *)(param_1 + 0xaa8) == *(int *)(*(int *)(param_1 + 0xaa4) + 0xc))) {
    FUN_002e6368(param_1 + 0xa98);
  }
  if ((*(int *)(param_1 + 0xabc) != 0) &&
     (*(int *)(param_1 + 0xac0) == *(int *)(*(int *)(param_1 + 0xabc) + 0xc))) {
    FUN_002e6368(param_1 + 0xab0);
    return;
  }
  return;
}
