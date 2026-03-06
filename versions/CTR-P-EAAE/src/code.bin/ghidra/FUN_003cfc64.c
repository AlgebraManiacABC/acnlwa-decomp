/**
 * FUN_003cfc64.c
 * Source line: 541688
 * Body lines: 11
 */
int FUN_003cfc64(int param_1)

{
  int iVar1;
  int local_10 [2];
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_0035b994(local_10);
    iVar1 = ((local_10[0] - *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 0x18)) +
            *(int *)(param_1 + 0x20);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return iVar1;
}
