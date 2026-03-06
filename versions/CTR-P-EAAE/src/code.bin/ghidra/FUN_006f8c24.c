/**
 * FUN_006f8c24.c
 * Source line: 1053619
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_006f8c24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_006f9638();
  if (iVar1 - 2U < 0x18) {
    iVar1 = FUN_002fae84();
    return iVar1;
  }
  iVar1 = FUN_002f74e0(0x4000,param_1);
  if (iVar1 != 0) {
    FUN_005b48a4();
    iVar1 = FUN_006cbb08();
    if (iVar1 != 0) {
      return iVar1 + 0x10;
    }
  }
  return 0;
}
