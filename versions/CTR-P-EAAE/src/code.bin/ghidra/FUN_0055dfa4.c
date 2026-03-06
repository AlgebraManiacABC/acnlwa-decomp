/**
 * FUN_0055dfa4.c
 * Source line: 803503
 * Body lines: 8
 */
void FUN_0055dfa4(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x50) != '\x01') {
    FUN_00560688();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return;
  }
  FUN_00138560(param_1 + 0x88,param_2 + *(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return;
}
