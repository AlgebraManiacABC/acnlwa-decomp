/**
 * FUN_005aeff0.c
 * Source line: 860448
 * Body lines: 8
 */
int FUN_005aeff0(char *param_1)

{
  if ((int)*param_1 - 0x30U < 10) {
    if ((int)param_1[1] - 0x30U < 10) {
      if ((int)param_1[2] - 0x30U < 10) {
        return (int)param_1[2] + ((int)param_1[1] + (*param_1 + -0x30) * 10 + -0x30) * 10 + -0x30;
      }
    }
  }
  return -1;
}
