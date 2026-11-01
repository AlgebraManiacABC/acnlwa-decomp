void FUN_00584d78(int param_1)

{
  if (*(char *)(param_1 + 0xc) != ',') {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x20) != '\0') {
    FUN_00584074();
  }
  return;
}
