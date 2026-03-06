/**
 * FUN_007552e8.c
 * Source line: 1110853
 * Body lines: 5
 */
int FUN_007552e8(int param_1)

{
  if (((*(char *)(param_1 + 4) != '\0') && (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)))
     && (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18))) {
    return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) * 0x228;
  }
  return 0;
}
