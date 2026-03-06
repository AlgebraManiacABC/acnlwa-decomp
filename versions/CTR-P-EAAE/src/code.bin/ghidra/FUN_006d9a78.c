/**
 * FUN_006d9a78.c
 * Source line: 1036128
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006d9a78(int param_1)

{
  int iVar1;
  
  if (iRam0095063c != 0) {
    iVar1 = *(int *)(iRam0095063c + (uint)*(byte *)(param_1 + 0x1ac) * 4 + 0x1c);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(iVar1 + 0x248) == '\x03') {
      return 1;
    }
  }
  return 0;
}
