/**
 * FUN_005bf758.c
 * Source line: 869207
 * Body lines: 12
 */
int FUN_005bf758(int param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = *(int *)(param_1 + 4);
  }
  if (param_2 != 0 && param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0xc) == param_2) {
        return param_1;
      }
      param_1 = *(int *)(param_1 + 8);
    } while (param_1 != 0);
  }
  return 0;
}
