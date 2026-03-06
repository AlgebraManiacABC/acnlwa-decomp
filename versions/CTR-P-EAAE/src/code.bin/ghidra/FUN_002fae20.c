/**
 * FUN_002fae20.c
 * Source line: 393740
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002fae20(int param_1)

{
  int iVar1;
  
  if ((((int)((uint)*(byte *)(param_1 + 0x79) << 0x1b) < 0) && (*(int *)(DAT_0095deac + 0x14) != 0))
     && (iVar1 = FUN_0075ad10(), iVar1 != 0)) {
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xef;
    OnUnresolved();
    return;
  }
  return;
}
