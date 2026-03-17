/**
 * FUN_0047d4ec.c
 * Source line: 650117
 * Body lines: 3
 */
void FUN_0047d4ec(int param_1)

{
  __rt_memclr_w(param_1 + 0xb10,0xb4);
  *(int *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa78) + 1;
  return;
}
