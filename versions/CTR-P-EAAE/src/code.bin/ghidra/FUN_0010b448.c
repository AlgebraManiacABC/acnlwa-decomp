/**
 * FUN_0010b448.c
 * Source line: 109531
 * Body lines: 14
 */
void FUN_0010b448(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  if ((char)param_1[1] != '\0') {
    if (((((char)param_1[1] == '\x01') && (0 < param_2)) && (0 < *param_1)) &&
       (param_2 = *param_1 - param_2, *param_1 = param_2, param_2 < 1)) {
      *param_1 = 0;
      FUN_002fae84();
      return;
    }
    return;
  }
  FUN_002fae84();
  return;
}
