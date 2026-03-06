/**
 * FUN_0073f4d8.c
 * Source line: 1097912
 * Body lines: 7
 */
int FUN_0073f4d8(int param_1)

{
  if (*(short *)(param_1 + 4) == 0x101) {
    param_1 += *(int *)(param_1 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
