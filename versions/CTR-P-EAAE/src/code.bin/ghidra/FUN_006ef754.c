/**
 * FUN_006ef754.c
 * Source line: 1048408
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_006ef754(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fcb34(param_2);
  if ((iVar1 != 0x9b) && ((param_3 != 0 || ((iVar1 != 0x24 && iVar1 != 0x27) && iVar1 != 0x28)))) {
    uVar2 = FUN_0024a5f4(param_1,param_2);
    return uVar2;
  }
  return 0;
}
