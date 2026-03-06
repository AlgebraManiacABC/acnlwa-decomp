/**
 * FUN_0013b584.c
 * Source line: 147961
 * Body lines: 12
 */
int * FUN_0013b584(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 == 0x44535743) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    iVar1 = FUN_0013c348(param_2);
    if (iVar1 != 0) {
      param_1[1] = iVar1 + 8;
      return param_1;
    }
  }
  return param_1;
}
