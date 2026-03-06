/**
 * FUN_00752328.c
 * Source line: 1108442
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00752328(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005ce300(*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaf0),0);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_002fca6c(*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaf0),0),
     uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
