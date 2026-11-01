void FUN_006cd344(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xb1c) != param_2) {
    *(int *)(param_1 + 0xb1c) = param_2;
    FUN_006cd374(param_1);
    FUN_00568c10(param_1 + 0x26c);
  }
  return;
}
