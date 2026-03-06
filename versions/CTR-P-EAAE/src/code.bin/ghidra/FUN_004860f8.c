/**
 * FUN_004860f8.c
 * Source line: 657404
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004860f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_10;
  
  if (cRam0097e054 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_10 = uRam0097e058;
    iVar1 = FUN_0048805c(&local_10,param_1,param_2,param_3,param_4,param_5);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
