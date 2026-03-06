/**
 * FUN_006a8c1c.c
 * Source line: 1005100
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006a8c1c(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x254);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xb7) = param_2 | *(byte *)(iVar1 + 0xb7) & 0xfe;
  }
  return;
}
