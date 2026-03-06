/**
 * FUN_002cd064.c
 * Source line: 367646
 * Body lines: 10
 */
void FUN_002cd064(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_0056939c(*(int *)(param_1 + 0x108) + iVar1 * 0x518);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  FUN_00818fa0(param_1 + 0xe4,&UNK_002f71e0,0);
  return;
}
