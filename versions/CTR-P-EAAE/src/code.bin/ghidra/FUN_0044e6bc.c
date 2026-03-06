/**
 * FUN_0044e6bc.c
 * Source line: 614567
 * Body lines: 8
 */
void FUN_0044e6bc(int param_1)

{
  if (*(int *)(param_1 + 0x124) - 0x100000U < 0x3ff00000) {
    FUN_0044e91c();
  }
  if (*(int *)(param_1 + 0x128) - 0x100000U < 0x3ff00000) {
    FUN_0044e91c();
    return;
  }
  return;
}
