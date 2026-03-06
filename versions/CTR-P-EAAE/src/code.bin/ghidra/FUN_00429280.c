/**
 * FUN_00429280.c
 * Source line: 592837
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined8 FUN_00429280(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0xffff00ff) << 8 | (param_2 & 0xff00ffff) >> 8;
  uVar1 = (param_1 & 0xff00ffff) >> 8 | (param_1 & 0xff00ff) << 8;
  return CONCAT44(uVar1 >> 0x10 | uVar1 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
}
