/**
 * FUN_006a211c.c
 * Source line: 1001896
 * Body lines: 11
 */
void FUN_006a211c(int param_1)

{
  if (*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xbc)) {
    FUN_0052c75c();
    FUN_0081b324(param_1 + 0x90,FUN_006a1f48,0);
    return;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_0081b324(param_1 + 0x90,&UNK_006a24ac,0);
    return;
  }
  FUN_0081b324(param_1 + 0x90,&UNK_006a2090,0);
  return;
}
