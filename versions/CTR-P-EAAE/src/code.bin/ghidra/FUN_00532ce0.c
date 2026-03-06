/**
 * FUN_00532ce0.c
 * Source line: 775714
 * Body lines: 7
 */
void FUN_00532ce0(int param_1)

{
  if (*(int *)(param_1 + 0x284) != 0) {
    FUN_004ee9a8(0xbf800000,param_1 + 0x27c);
    FUN_002504d4(param_1 + 0x298,0x100066d);
    thunk_FUN_0020ad0c(param_1 + 0x298,0);
    return;
  }
  return;
}
