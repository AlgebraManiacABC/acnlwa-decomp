/**
 * FUN_00746fb4.c
 * Source line: 1103082
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00746fb4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0x28) != '\x03') &&
     ((*(char *)(iVar1 + 0x28) != '\x05' ||
      (*(int *)(iVar1 + 0x124) != *(int *)(iVar1 + 0x11c) ||
       *(int *)(iVar1 + 0x120) != *(int *)(iVar1 + 0x118))))) {
    return 0;
  }
  return 1;
}
