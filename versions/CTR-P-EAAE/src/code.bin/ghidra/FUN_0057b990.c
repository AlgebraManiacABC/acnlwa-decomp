/**
 * FUN_0057b990.c
 * Source line: 824103
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_0057b990(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00529cf4();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x30);
  }
  return iVar1 != 0;
}
