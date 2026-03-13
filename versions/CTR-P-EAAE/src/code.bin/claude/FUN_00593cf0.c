/**
 * FUN_00593cf0.c
 * Source line: 842154
 * Body lines: 10
 */
void FUN_00593cf0(int param_1)

{
  if ((*(int *)(param_1 + 0x148) != 0) &&
     (*(int *)(param_1 + 0x14c) == *(int *)(*(int *)(param_1 + 0x148) + 0xc))) {
    FUN_002e6368(param_1 + 0x13c);
  }
  if ((*(int *)(param_1 + 0x160) != 0) &&
     (*(int *)(param_1 + 0x164) == *(int *)(*(int *)(param_1 + 0x160) + 0xc))) {
    FUN_002e6368(param_1 + 0x154);
  }
  FUN_00590ad8(param_1);
  return;
}
