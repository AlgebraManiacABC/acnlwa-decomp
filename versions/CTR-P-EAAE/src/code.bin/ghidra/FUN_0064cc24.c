/**
 * FUN_0064cc24.c
 * Source line: 959426
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_0064cc24(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_1 + 0x28);
  iVar1 = FUN_0057b990(param_1);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x86c) = *(undefined2 *)(param_1 + 0x2e);
  }
  return iVar1 != 0;
}
