/**
 * FUN_0073ef34.c
 * Source line: 1097554
 * Body lines: 7
 */
int FUN_0073ef34(int param_1)

{
  if (*(short *)(param_1 + 0x10) == 0x101) {
    param_1 += *(int *)(param_1 + 0x14);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
