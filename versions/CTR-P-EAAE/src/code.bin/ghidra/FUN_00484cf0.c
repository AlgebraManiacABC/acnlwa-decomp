/**
 * FUN_00484cf0.c
 * Source line: 656601
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00484cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  if (cRam0097e054 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_c = uRam0097e058;
    iVar1 = FUN_00487e84(&local_c,param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
