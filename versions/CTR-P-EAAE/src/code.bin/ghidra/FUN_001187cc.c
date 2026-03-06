/**
 * FUN_001187cc.c
 * Source line: 116933
 * Body lines: 8
 */
void FUN_001187cc(int param_1,int param_2)

{
  thunk_FUN_006bd3b8();
  *(int *)(param_1 + 0x8f38) = *(int *)(param_1 + 0x8f38) + param_2;
  *(int *)(param_1 + 0x8f34) = *(int *)(param_1 + 0x8f34) + param_2;
  if (-1 < param_2) {
    FUN_001e1c58(param_1 + 0x5700,param_2);
  }
  FUN_002fb94c();
  return;
}
