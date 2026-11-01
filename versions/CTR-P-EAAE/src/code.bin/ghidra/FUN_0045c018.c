void FUN_0045c018(int param_1,int param_2)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
    __rt_memcpy_w(param_1 + 4,param_2,0x4c);
    return;
  }
  return;
}
