/**
 * FUN_0076f7e8.c
 * Source line: 1132652
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0076f7e8(int param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 100) & 1) == 0) {
    if ((*(ushort *)(param_1 + 100) & 2) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
