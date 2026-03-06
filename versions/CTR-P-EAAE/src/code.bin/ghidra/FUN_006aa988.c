/**
 * FUN_006aa988.c
 * Source line: 1006212
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_006aa988(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00529d8c();
  if (iVar1 != 0) {
    FUN_006d1cf8(param_1 + 0x14);
    *(int *)(param_1 + 0x20) = param_1;
    *(char *)(param_1 + 0x24) = (char)*(undefined4 *)(param_1 + 8);
  }
  return iVar1 != 0;
}
