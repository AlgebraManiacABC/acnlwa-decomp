/**
 * FUN_0069335c.c
 * Source line: 997866
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0069335c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_002f74e0(0x4000,param_1);
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_002f74e0(0x2000,param_1), iVar1 == 0 ||
      (iVar1 = FUN_005b4018(param_1), iVar1 != 0)))) {
    GET_BYTE_00957322();
    iVar1 = FUN_004e7344();
    if (iVar1 == 0) {
      return 0;
    }
    if ((DAT_0095c6d0 != 0) && (iVar1 = FUN_0076e7c8(DAT_0095c6d0 + 0x10), iVar1 == 2)) {
      return 0;
    }
  }
  return 1;
}
