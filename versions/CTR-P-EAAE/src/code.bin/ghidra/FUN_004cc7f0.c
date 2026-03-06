/**
 * FUN_004cc7f0.c
 * Source line: 711721
 * Body lines: 12
 */
void FUN_004cc7f0(int param_1,int param_2,int param_3)

{
  param_1 += param_2 * 0x10;
  if (param_3 == 0) {
    FUN_004ccc48();
    if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x20)) {
      FUN_007e68a8(0,param_1 + 0x14,0);
      return;
    }
  }
  else {
    FUN_007e68a8(0,param_1 + 0x14,(param_3 + 4U) / 5);
  }
  return;
}
