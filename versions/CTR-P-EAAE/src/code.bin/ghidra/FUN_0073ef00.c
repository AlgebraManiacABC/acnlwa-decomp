/**
 * FUN_0073ef00.c
 * Source line: 1097524
 * Body lines: 7
 */
int FUN_0073ef00(int param_1)

{
  if (*(short *)(param_1 + 8) == 0x101) {
    param_1 += *(int *)(param_1 + 0xc);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
