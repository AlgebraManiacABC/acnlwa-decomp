/**
 * FUN_002b6aa4.c
 * Source line: 354193
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_002b6aa4(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x88) == 0) || (iVar1 = FUN_0074fdd0(), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0xb0) == 0) || (iVar1 = FUN_0074fdd0(param_1 + 0x98), iVar1 != 0)) {
      return 0;
    }
  }
  return 1;
}
