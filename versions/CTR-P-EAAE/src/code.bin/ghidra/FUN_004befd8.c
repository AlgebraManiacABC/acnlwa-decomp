/**
 * FUN_004befd8.c
 * Source line: 701156
 * Body lines: 8
 */
void FUN_004befd8(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_004c48cc(param_2);
  if (iVar1 != 0) {
    FUN_00136cc0(*param_1);
  }
  *(int **)(*param_1 + 8) = param_1;
  return;
}
