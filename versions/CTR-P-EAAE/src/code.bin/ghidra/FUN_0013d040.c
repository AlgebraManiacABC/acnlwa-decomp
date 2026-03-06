/**
 * FUN_0013d040.c
 * Source line: 149682
 * Body lines: 5
 */
void FUN_0013d040(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0013d060();
  }
          // WARNING: Could not recover jumptable at 0x0013d068. Too many branches
          // WARNING: Treating indirect jump as call
  (*pcRam0095e0c4)(param_1);
  return;
}
