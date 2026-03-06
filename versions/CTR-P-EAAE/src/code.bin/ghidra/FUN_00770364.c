/**
 * FUN_00770364.c
 * Source line: 1133192
 * Body lines: 9
 */
int FUN_00770364(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057bc2c(param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = 0x95bfd2;
  }
  else {
    iVar1 = param_1 + param_3 * 0x40 + param_2 * 4;
  }
  return iVar1;
}
