/**
 * FUN_0073f698.c
 * Source line: 1097995
 * Body lines: 7
 */
int FUN_0073f698(int param_1)

{
  if (*(short *)(param_1 + 4) == 0x101) {
    param_1 += *(int *)(param_1 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
