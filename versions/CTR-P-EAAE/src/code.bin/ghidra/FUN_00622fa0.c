/**
 * FUN_00622fa0.c
 * Source line: 936771
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00622fa0(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00746f10(&DAT_00a22020,0);
  if (iVar1 != 0) {
    FUN_0062302c(param_1,1 << (param_2 & 0xff) & 0xffU | 0x80);
  }
  return iVar1 != 0;
}
