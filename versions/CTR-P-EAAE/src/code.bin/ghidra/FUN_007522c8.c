/**
 * FUN_007522c8.c
 * Source line: 1108423
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007522c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005ce300(*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaf0),0);
  if (((iVar1 == 0) ||
      (iVar1 = FUN_002fca6c(*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaf0),0),
      iVar1 != 0)) ||
     (iVar1 = FUN_002266c8(*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaf0)),
     uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
