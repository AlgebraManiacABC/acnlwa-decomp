int FUN_0014358c(short *param_1)

{
  int iVar1;
  
  if ((*param_1 == 0) || (*param_1 != 0x220c)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  return iVar1;
}
