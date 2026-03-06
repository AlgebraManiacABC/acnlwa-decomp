/**
 * FUN_001a2328.c
 * Source line: 210295
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001a2328(int param_1)

{
  int iVar1;
  
  if (((DAT_009506b0 == -1) && (DAT_009506b4 != 0)) && (iVar1 = FUN_006dfde8(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x118) = 0x42000000;
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar1 + 0x1c);
  }
  return;
}
