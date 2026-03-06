/**
 * FUN_00643ce8.c
 * Source line: 956643
 * Body lines: 10
 */
#include "../../../include/types.h"

code * FUN_00643ce8(int param_1,int param_2,undefined4 param_3,Item_t param_4)

{
  Item_t IStack_10;
  
  if (param_2 != 9) {
    *(code **)(param_1 + 0x2c8) = FUN_00643ce8;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    return FUN_00643ce8;
  }
  IStack_10 = param_4;
  Item_Set(&IStack_10,(uint)*(ushort *)(param_1 + 0x274));
  FUN_0064bed4(param_1,&IStack_10,0,1);
  return (code *)&IStack_10;
}
