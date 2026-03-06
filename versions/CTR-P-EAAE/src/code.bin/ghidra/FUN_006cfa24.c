/**
 * FUN_006cfa24.c
 * Source line: 1030468
 * Body lines: 10
 */
void FUN_006cfa24(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != '\0') {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (*param_1 == '\0' || iVar1 == 0) {
    return;
  }
  FUN_004ee9cc(param_1 + 0x18);
  return;
}
