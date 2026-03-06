/**
 * FUN_005ab5a4.c
 * Source line: 857893
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_005ab5a4(int param_1)

{
  int iVar1;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = FUN_0034748c(&local_14);
  if (iVar1 < 0) {
    if (param_1 == 0) {
      FUN_005aead8(iVar1);
    }
  }
  else {
    FUN_00347454(local_14);
    local_14 = 0;
  }
  FUN_00347454(local_14);
  return (iVar1 >> 0x1f) + 1;
}
