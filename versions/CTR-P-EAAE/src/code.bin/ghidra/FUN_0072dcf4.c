/**
 * FUN_0072dcf4.c
 * Source line: 1085090
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined8 FUN_0072dcf4(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0072d98c();
  uVar3 = FUN_0072d98c(param_2);
  lVar1 = (ulonglong)((uint)uVar2 - (uint)uVar3) * 1000;
  return CONCAT44(((int)((ulonglong)uVar2 >> 0x20) -
                  ((int)((ulonglong)uVar3 >> 0x20) + (uint)((uint)uVar2 < (uint)uVar3))) * 1000 +
                  (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
}
