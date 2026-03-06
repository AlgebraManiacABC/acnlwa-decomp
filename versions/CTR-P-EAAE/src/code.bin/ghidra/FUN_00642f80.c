/**
 * FUN_00642f80.c
 * Source line: 956025
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00642f80(int param_1,int param_2)

{
  Item_t IStack_18;
  
  if (param_2 != 8) {
    *(code **)(param_1 + 0x2c8) = FUN_00642f80;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    return;
  }
  Item_Set(&IStack_18,(uint)*(ushort *)(param_1 + 0x274));
  FUN_002fb94c();
  return;
}
