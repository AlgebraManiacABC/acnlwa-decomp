/**
 * FUN_00151858.c
 * Source line: 165690
 * Body lines: 4
 */
int FUN_00151858(int param_1)

{
  if (((iRam00975c80 != 0) && (0 < param_1)) && (param_1 <= *(int *)(iRam00975c80 + 0x2f6c4))) {
    return (int)*(short *)(iRam00975c80 + (short)((short)param_1 + -1) * 2 + 0x2f718);
  }
  return -2;
}
