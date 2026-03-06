/**
 * FUN_0073f4f4.c
 * Source line: 1097926
 * Body lines: 7
 */
int FUN_0073f4f4(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) == -1) || (*(short *)(param_1 + 0x18) != 0x2210)) {
    param_1 = 0;
  }
  else {
    param_1 += *(int *)(param_1 + 0x1c);
  }
  return param_1;
}
