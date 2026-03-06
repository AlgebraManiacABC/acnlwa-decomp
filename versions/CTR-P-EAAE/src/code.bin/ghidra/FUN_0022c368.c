/**
 * FUN_0022c368.c
 * Source line: 282702
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0022c368(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x122) = 1;
  }
  return;
}
