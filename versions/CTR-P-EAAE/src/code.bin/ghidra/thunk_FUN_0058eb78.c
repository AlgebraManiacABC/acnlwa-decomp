/**
 * thunk_FUN_0058eb78.c
 * Source line: 407003
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 thunk_FUN_0058eb78(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00305f2c();
  if (((iVar1 != 3) && (iRam009524dc != 0)) &&
     ((param_1 == 0 || (*(byte *)(iRam009524dc + 0x1b) < 0x23)))) {
    return 1;
  }
  return 0;
}
