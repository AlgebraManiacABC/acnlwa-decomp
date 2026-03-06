/**
 * FUN_0045c018.c
 * Source line: 624890
 * Body lines: 5
 */
void FUN_0045c018(int param_1,int param_2)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
    __rt_memcpy_w(param_1 + 4,param_2,0x4c);
    return;
  }
  return;
}
