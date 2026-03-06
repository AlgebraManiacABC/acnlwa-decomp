/**
 * FUN_005c69e4.c
 * Source line: 875696
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005c69e4(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_002fe8a8();
  if (iVar1 != 0) {
    uVar2 = __rt_memcpy((uint *)(iVar1 + 0x5498),param_2,0xa9);
    FUN_00582d40((uint *)(iVar1 + 0x5498),(int)((ulonglong)uVar2 >> 0x20));
    return;
  }
  return;
}
