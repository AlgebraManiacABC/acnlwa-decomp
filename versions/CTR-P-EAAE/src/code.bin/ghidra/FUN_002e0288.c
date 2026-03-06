/**
 * FUN_002e0288.c
 * Source line: 377685
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002e0288(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x500);
  *(byte *)(param_1 + 0x508) = param_2;
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe | param_2;
  }
  return;
}
