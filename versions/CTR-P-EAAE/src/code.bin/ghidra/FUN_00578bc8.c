/**
 * FUN_00578bc8.c
 * Source line: 821964
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00578bc8(int param_1)

{
  int iVar1;
  
  if ((((int)((uint)*(byte *)(param_1 + 0xb0a) << 0x1b) < 0) && (DAT_00950148 != 0)) &&
     (iVar1 = FUN_00697e88(DAT_00950148,param_1), iVar1 != 0)) {
    *(byte *)(param_1 + 0xb0a) = *(byte *)(param_1 + 0xb0a) & 0xef;
  }
  return;
}
