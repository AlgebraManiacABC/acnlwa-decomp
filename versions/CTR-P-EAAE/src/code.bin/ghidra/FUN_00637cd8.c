/**
 * FUN_00637cd8.c
 * Source line: 951347
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00637cd8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007559ac(param_3);
  if (((iVar1 == 0x67) && (iVar1 = FUN_00755a98(param_3), iVar1 == 0)) &&
     (*(int *)(param_1 + 0xf0) != 0)) {
    uVar2 = FUN_002fb94c();
    return uVar2;
  }
  return 0;
}
