/**
 * FUN_0045b65c.c
 * Source line: 624338
 * Body lines: 9
 */
void FUN_0045b65c(int param_1)

{
  if (*(char *)(param_1 + 0x58) != '\x04') {
    FUN_0045b3e4(param_1,1);
    FUN_0044d724(param_1 + 4);
    if (*(int *)(param_1 + 100) - 0x100000U < 0x3ff00000) {
      FUN_0044ffd0();
      return;
    }
  }
  return;
}
