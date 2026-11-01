void FUN_001139fc(int param_1,int param_2)

{
  *(char *)(param_1 + 0x250f) = (char)param_2;
  if (param_2 == 5) {
    FUN_0030a01c();
  }
  return;
}
