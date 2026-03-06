/**
 * FUN_0076818c.c
 * Source line: 1125800
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076818c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00535a68();
  if ((((iVar1 != 0) && (*(byte *)(iVar1 + 0xd) >> 4 < 8)) && (*(byte *)(iVar1 + 0xd) >> 4 == 7)) &&
     (iVar1 = FUN_002f74e0(4,param_2), iVar1 != 0)) {
    iVar1 = FUN_002f74e0(0x20,param_2);
    if ((iVar1 == 0) && (iVar1 = FUN_002f74e0(0x40000,param_2), iVar1 == 0)) {
      FUN_002f74e0(0x80000,param_2);
    }
    return 1;
  }
  return 0;
}
