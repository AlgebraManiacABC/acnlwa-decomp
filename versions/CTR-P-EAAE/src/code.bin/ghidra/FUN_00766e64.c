/**
 * FUN_00766e64.c
 * Source line: 1124906
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00766e64(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_0073df8c(*(undefined4 *)(param_1 + 0xc10),param_2,0,&local_8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8;
  }
  return uVar2;
}
