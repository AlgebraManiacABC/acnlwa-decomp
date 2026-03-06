/**
 * FUN_001db0c8.c
 * Source line: 242905
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001db0c8(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0xb4) == '\x02') {
    *(undefined1 *)(iVar1 + 0xb7) = param_2;
    FUN_001b0544(0x3ee66666,iVar1 + 0xcc,0);
    *(undefined1 *)(iVar1 + 0xe0) = 1;
    *(undefined1 *)(iVar1 + 0xb4) = 3;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0xd0);
  }
  return;
}
