/**
 * FUN_006edbd0.c
 * Source line: 1047175
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006edbd0(int param_1)

{
  undefined2 local_10;
  
  local_10 = (undefined2)*(undefined4 *)(param_1 + 0x500);
  *(undefined2 *)(param_1 + 0x20) = local_10;
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x502);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x4e4);
  if (*(short *)(*(int *)(param_1 + 0x28) + 0x2e) == *(short *)(param_1 + 0x20)) {
    FUN_006ea210(param_1);
    *(undefined1 *)(param_1 + 0x550) = 1;
  }
  return;
}
