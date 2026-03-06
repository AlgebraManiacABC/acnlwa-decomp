/**
 * FUN_005cc024.c
 * Source line: 879470
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005cc024(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x270) & 7) == 3) {
    *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xf8 | 1;
  }
  iVar1 = FUN_00768174(param_1 + 0x274);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xe7 | 8;
  }
  return;
}
