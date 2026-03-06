/**
 * FUN_00756c84.c
 * Source line: 1112348
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00756c84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00309ef0(param_1 + 0x46);
  if ((iVar1 == 0) || (3 < *(byte *)(param_1 + 0x4f))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
