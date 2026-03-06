/**
 * FUN_002cd120.c
 * Source line: 367690
 * Body lines: 10
 */
void FUN_002cd120(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e086c(*(int *)(param_1 + 0x108) + iVar1 * 0x518);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  FUN_00818fa0(param_1 + 0xe4,FUN_002ccbcc,0);
  return;
}
