/**
 * FUN_002a4724.c
 * Source line: 345251
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002a4724(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x23c0) != '\0') {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00136e58(*(int *)(param_1 + 0x1c),0);
    }
    iVar1 = 0;
    do {
      FUN_002f88b8(*(undefined4 *)(param_1 + iVar1 * 4 + 0x34));
      iVar1 += 1;
    } while (iVar1 < 0xb);
    *(undefined1 *)(param_1 + 0x23c0) = 0;
  }
  return;
}
