/**
 * FUN_0051b094.c
 * Source line: 760543
 * Body lines: 10
 */
void FUN_0051b094(char *param_1,char param_2,char param_3)

{
  param_1[8] = param_2;
  param_1[9] = param_3;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  return;
}
