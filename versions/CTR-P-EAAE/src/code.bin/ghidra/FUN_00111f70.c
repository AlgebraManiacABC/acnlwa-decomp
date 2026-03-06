/**
 * FUN_00111f70.c
 * Source line: 112904
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00111f70(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = Item_Param11Valid(param_1);
  if (((uVar1 != 0) && (iVar2 = FUN_0030b674(param_1), iVar2 != 0xd)) && (iVar2 == param_2)) {
    return 1;
  }
  return 0;
}
