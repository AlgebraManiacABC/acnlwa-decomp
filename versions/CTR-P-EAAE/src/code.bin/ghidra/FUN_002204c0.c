/**
 * FUN_002204c0.c
 * Source line: 277038
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_002204c0(int param_1,uint param_2)

{
  undefined1 local_54 [68];
  
  FUN_0081d248(local_54);
  if (param_2 < 0x10) {
    FUN_005ea8f8(DAT_0095decc,0);
    FUN_005ea964(DAT_0095decc,local_54,"STR_Map_name",*(undefined1 *)(param_2 + 0x94fc81),0);
    FUN_005ea8dc(DAT_0095decc,0);
  }
  (**(code **)(*(int *)(param_1 + 0xb350) + 0x14))(param_1 + 0xb350,local_54);
  return param_1 + 0xb350;
}
