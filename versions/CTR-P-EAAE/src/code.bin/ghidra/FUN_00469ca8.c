/**
 * FUN_00469ca8.c
 * Source line: 635716
 * Body lines: 15
 */
int FUN_00469ca8(short param_1,short param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 == 0) {
    iVar1 = 4;
  }
  else if (param_3 == 1) {
    iVar1 = 3;
  }
  else if (param_3 == 2 || param_3 == 3) {
    iVar1 = 2;
  }
  else {
    FUN_00134250();
  }
  return (int)param_1 * (int)param_2 * iVar1;
}
