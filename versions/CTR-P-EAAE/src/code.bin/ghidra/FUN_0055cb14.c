/**
 * FUN_0055cb14.c
 * Source line: 802640
 * Body lines: 13
 */
void FUN_0055cb14(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((param_2 != 0 || param_3 != 0) || param_4 != 0) || param_5 != 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  if (((param_2 == 0 && param_3 == 0) && param_4 == 0) && param_5 == 0) {
    *param_1 = 1;
    param_1[1] = 0x6c078967;
    param_1[2] = 0x714acb41;
    param_1[3] = 0x48077044;
  }
  return;
}
