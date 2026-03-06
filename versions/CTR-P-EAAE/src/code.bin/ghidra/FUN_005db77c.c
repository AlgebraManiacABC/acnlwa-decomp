/**
 * FUN_005db77c.c
 * Source line: 887568
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_005db77c(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_007559a0(param_3);
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20,uVar1);
  *param_2 = (uint)(iVar2 != 0);
  return 1;
}
