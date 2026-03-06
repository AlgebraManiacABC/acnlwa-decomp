/**
 * FUN_006d39a8.c
 * Source line: 1033215
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_006d39a8(void)

{
  int iVar1;
  
  iVar1 = _DAT_0098c500;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(short *)(*(int *)(iVar1 + 0xc) + 0xc) == 0x228) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}
