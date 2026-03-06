/**
 * FUN_00347d2c.c
 * Source line: 444615
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00347d2c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_14;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_00725cc0();
  local_14 = (undefined4)uVar3;
  FUN_00348bac(&local_14,(int)((ulonglong)uVar3 >> 0x20),uVar1,uVar2,param_2);
  return;
}
