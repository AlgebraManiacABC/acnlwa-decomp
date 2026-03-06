/**
 * FUN_00770300.c
 * Source line: 1133162
 * Body lines: 6
 */
#include "../../../include/types.h"

ulonglong FUN_00770300(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if ((uVar1 != 0) && (0xff < uVar1)) {
    uVar1 &= 0xff;
  }
  return CONCAT44(uVar1 + (uint)*(byte *)((int)param_1 + 9) * 0x100,*param_1) & 0xffffffffffff;
}
