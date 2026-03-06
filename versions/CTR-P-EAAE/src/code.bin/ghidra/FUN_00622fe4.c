/**
 * FUN_00622fe4.c
 * Source line: 936785
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00622fe4(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00746f10(&DAT_00a22020,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0;
    if ((1 << (param_2 & 0xff) & 0x1fU) != 0) {
      FUN_0062302c(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}
