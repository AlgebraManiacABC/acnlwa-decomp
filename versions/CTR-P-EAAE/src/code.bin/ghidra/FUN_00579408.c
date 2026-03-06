/**
 * FUN_00579408.c
 * Source line: 822379
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00579408(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fc900();
  if (iVar1 != 0) {
    if (*(byte *)(*(int *)(param_1 + 0xaa0) + 5) >> 6 == 2) {
      FUN_0029d354(*(int *)(param_1 + 0xaa0),*(undefined1 *)(param_1 + 0x95e));
      return;
    }
  }
  return;
}
