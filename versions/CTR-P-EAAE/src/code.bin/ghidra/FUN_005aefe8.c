/**
 * FUN_005aefe8.c
 * Source line: 860431
 * Body lines: 10
 */
int FUN_005aefe8(int param_1)

{
  if ((int)*(char *)(param_1 + 0xc) - 0x30U < 10) {
    if ((int)*(char *)(param_1 + 0xd) - 0x30U < 10) {
      if ((int)*(char *)(param_1 + 0xe) - 0x30U < 10) {
        return (int)*(char *)(param_1 + 0xe) +
               ((int)*(char *)(param_1 + 0xd) + (*(char *)(param_1 + 0xc) + -0x30) * 10 + -0x30) *
               10 + -0x30;
      }
    }
  }
  return -1;
}
