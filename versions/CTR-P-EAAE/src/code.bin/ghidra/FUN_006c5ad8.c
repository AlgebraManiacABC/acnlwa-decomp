/**
 * FUN_006c5ad8.c
 * Source line: 1024294
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_006c5ad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002fe7cc(param_5);
  if (((iVar1 == 0) || (iVar1 = FUN_0075291c(iVar1,param_1,param_2), iVar1 == 0)) ||
     (uVar2 = FUN_0075d608(iVar1,param_3,param_4), 0xfe < uVar2)) {
    uVar2 = 0;
  }
  return uVar2;
}
