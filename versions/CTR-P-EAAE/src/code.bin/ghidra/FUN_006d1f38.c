/**
 * FUN_006d1f38.c
 * Source line: 1031853
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_006d1f38(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0098c500;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(*(int *)(iVar1 + 0xc) + 0x24) == param_1) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}
