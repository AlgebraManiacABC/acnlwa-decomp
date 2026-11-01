void FUN_004cb568(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_2 + param_3;
  return;
}
