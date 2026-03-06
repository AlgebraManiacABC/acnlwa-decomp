/**
 * FUN_0076bfec.c
 * Source line: 1129438
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076bfec(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  FUN_0076c030(&local_10,param_1);
  if ((*param_2 & 0x7fff) == ((ushort)local_10 & 0x7fff)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0076a880(param_1,param_2);
  }
  return uVar1;
}
