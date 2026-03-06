/**
 * FUN_004685ac.c
 * Source line: 634211
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_004685ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  
  if (cRam0097e072 != '\0') {
    local_10 = uRam0097e07c;
    iVar1 = FUN_00469438(&local_10,param_1,param_2,param_3);
    if (iVar1 != -0x36dfe7e6) {
      return iVar1;
    }
  }
  return -0x1f5eec08;
}
