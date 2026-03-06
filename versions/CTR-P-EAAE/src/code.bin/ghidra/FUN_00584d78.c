/**
 * FUN_00584d78.c
 * Source line: 831209
 * Body lines: 7
 */
void FUN_00584d78(int param_1)

{
  if (*(char *)(param_1 + 0xc) != ',') {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x20) != '\0') {
          // WARNING: Subroutine does not return
    FUN_00584074();
  }
  return;
}
