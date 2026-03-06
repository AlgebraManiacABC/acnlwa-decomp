/**
 * FUN_004847ec.c
 * Source line: 656388
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004847ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_14;
  
  if (cRam0097e054 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_14 = uRam0097e058;
    iVar1 = FUN_00487d54(&local_14,param_1,param_2,param_3,param_4,param_5,param_6);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
