/**
 * FUN_004f023c.c
 * Source line: 737929
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_004f023c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (uVar1 = 0, ((uint)*(byte *)(param_1 + 0x28) & 1 << (param_2 & 0xff)) != 0))
  {
    uVar1 = 1;
  }
  return uVar1;
}
