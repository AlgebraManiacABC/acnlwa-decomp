/**
 * FUN_00755578.c
 * Source line: 1111070
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00755578(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0x28) & 1) != 0) &&
     ((iVar1 = FUN_00754908(param_1 + 0x14), iVar1 != 0 ||
      (iVar1 = FUN_00754908(param_1 + 0x1c), iVar1 != 0)))) {
    return 0;
  }
  return 1;
}
