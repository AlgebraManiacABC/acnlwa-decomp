void FUN_004a726c(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1)[1] != 0) {
    iVar1 = *(int *)*param_1;
    if (iVar1 == -0x80000000) {
      (*pcRam0097512c)();
      return;
    }
    if (iVar1 == 0x40000000) {
      (*pcRam00975130)();
      return;
    }
  }
  return;
}
