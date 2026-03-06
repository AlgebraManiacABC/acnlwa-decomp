/**
 * FUN_002f73b8.c
 * Source line: 389503
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002f73b8(int param_1)

{
  undefined1 auStack_20 [16];
  int local_10 [2];
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_001329c4(auStack_20,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    local_10[0] = *(int *)(param_1 + 8);
    if (local_10[0] != 0) {
      FUN_00130804(local_10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00132a3c(auStack_20);
  }
  FUN_00138744((cro_container *)(param_1 + 0x1c));
  return;
}
