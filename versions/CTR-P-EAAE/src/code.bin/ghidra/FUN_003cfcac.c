/**
 * FUN_003cfcac.c
 * Source line: 541707
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003cfcac(int param_1)

{
  uint local_18;
  int iStack_14;
  
  if (*(int *)(param_1 + 0x24) != 2) {
    FUN_0035ba40(&UNK_0089be44,0x2f,0xe000000e,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_0035b994(&local_18);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = local_18 - *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x1c) =
       iStack_14 - (*(int *)(param_1 + 0x14) + (uint)(local_18 < *(uint *)(param_1 + 0x10)));
  return 1;
}
