/**
 * FUN_004a726c.c
 * Source line: 681714
 * Body lines: 13
 */
void FUN_004a726c(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1)[1] != 0) {
    iVar1 = *(int *)*param_1;
    if (iVar1 == -0x80000000) {
          // WARNING: Could not recover jumptable at 0x004a72a0. Too many branches
          // WARNING: Treating indirect jump as call
      (*pcRam0097512c)();
      return;
    }
    if (iVar1 == 0x40000000) {
          // WARNING: Could not recover jumptable at 0x004a7298. Too many branches
          // WARNING: Treating indirect jump as call
      (*pcRam00975130)();
      return;
    }
  }
  return;
}
