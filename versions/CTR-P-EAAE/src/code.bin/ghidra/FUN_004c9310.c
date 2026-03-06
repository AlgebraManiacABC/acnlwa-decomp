/**
 * FUN_004c9310.c
 * Source line: 708816
 * Body lines: 13
 */
int * FUN_004c9310(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == 0x51455343) && (param_2[2] - 0x1000000U < 0x10001)) {
    *param_1 = (int)param_2;
    iVar1 = FUN_0073f74c(param_2);
    param_1[1] = iVar1 + 8;
    iVar1 = FUN_0073f7b8(*param_1);
    param_1[2] = iVar1 + 8;
    return param_1;
  }
  return param_1;
}
