/**
 * FUN_005ad9a0.c
 * Source line: 859390
 * Body lines: 13
 */
int FUN_005ad9a0(char *param_1)

{
  if ((((*param_1 != '\0') && (param_1[1] != '\0')) && (param_1[2] != '\0')) &&
     ((param_1[3] != '\0' && ((int)param_1[4] - 0x30U < 10)))) {
    if ((int)param_1[5] - 0x30U < 10) {
      if ((int)param_1[6] - 0x30U < 10) {
        if ((int)param_1[7] - 0x30U < 10) {
          return (int)param_1[7] +
                 ((int)param_1[6] +
                 ((int)param_1[5] + (param_1[4] + -0x30) * 10 + -0x30) * 10 + -0x30) * 10 + -0x30;
        }
      }
    }
  }
  return -1;
}
