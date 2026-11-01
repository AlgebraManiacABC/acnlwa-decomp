void FUN_004a8090(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*param_1 + 0xc);
  if (param_2 == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = param_2 - (int)piVar1;
  }
  return;
}
