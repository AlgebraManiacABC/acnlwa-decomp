/**
 * FUN_005791c4.c
 * Source line: 822260
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005791c4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fc900();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x938) = 0xffffffff;
    *(byte *)(param_1 + 0xb09) = *(byte *)(param_1 + 0xb09) | 1;
    FUN_0029d228(*(undefined1 *)(param_1 + 0x95e));
    return;
  }
  return;
}
