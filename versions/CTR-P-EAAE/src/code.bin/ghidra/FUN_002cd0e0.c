/**
 * FUN_002cd0e0.c
 * Source line: 367673
 * Body lines: 9
 */
void FUN_002cd0e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_005e2dc4(*(int *)(param_1 + 0x108) + iVar1 * 0x518);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
