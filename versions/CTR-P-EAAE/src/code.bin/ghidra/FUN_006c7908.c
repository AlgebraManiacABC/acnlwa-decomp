/**
 * FUN_006c7908.c
 * Source line: 1025643
 * Body lines: 15
 */
#include "../../../include/types.h"

FUN_006c7908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_5;
  iVar1 = FUN_006c5ad8();
  if (((iVar1 != 0xad && iVar1 != 0xae) && ((iVar1 != 0xaf && iVar1 != 0xb0) && iVar1 != 0xb1)) &&
     (uVar2 = param_5, iVar1 = FUN_006c6a84(param_1,param_2,param_3,param_4), iVar1 == 0)) {
    uVar2 = FUN_006c75e0(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  iVar1 = FUN_002fe7cc(param_5);
  if ((iVar1 != 0) && (iVar1 = FUN_0075291c(iVar1,param_1,param_2), iVar1 != 0)) {
    uVar2 = FUN_006a96d8(iVar1,param_3,param_4,uVar2);
    return uVar2;
  }
  return 0;
}
