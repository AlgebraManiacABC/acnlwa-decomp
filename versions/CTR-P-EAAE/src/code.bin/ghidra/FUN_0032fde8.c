/**
 * FUN_0032fde8.c
 * Source line: 433464
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0032fde8(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x84) == 0) || (iVar1 = FUN_0075cd14(), iVar1 != 0)) &&
     (*(char *)(param_1 + 0x138) == '\0')) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0;
    }
    iVar1 = FUN_0075d0f0();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}
