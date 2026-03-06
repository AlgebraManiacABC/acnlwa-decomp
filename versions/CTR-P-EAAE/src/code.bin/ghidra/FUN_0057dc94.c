/**
 * FUN_0057dc94.c
 * Source line: 825212
 * Body lines: 11
 */
void FUN_0057dc94(int param_1)

{
  if (*(int *)(param_1 + 0x588) != 0) {
    FUN_002cd30c(*(int *)(param_1 + 0x588) + 0x398);
  }
  if (*(int *)(param_1 + 0x58c) != 0) {
    FUN_002cd30c(*(int *)(param_1 + 0x58c) + 0x398);
  }
  if (*(int *)(param_1 + 0x590) == 0) {
    return;
  }
  FUN_002cd30c(*(int *)(param_1 + 0x590) + 0x398);
  return;
}
