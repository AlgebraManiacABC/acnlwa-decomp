/**
 * FUN_0076ad24.c
 * Source line: 1128353
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0076ad24(undefined4 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0076af88(param_1,param_1);
  if ((int)uVar2 != 0) {
    uVar1 = *(ushort *)((int)((ulonglong)uVar2 >> 0x20) + 2);
    if (((uVar1 & 8) != 0) && ((uVar1 & 8) != 0)) {
      return ((uint)uVar1 << 0x19) >> 0x1d;
    }
  }
  return 0xffffffff;
}
