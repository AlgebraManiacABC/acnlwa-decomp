/**
 * FUN_00328288.c
 * Source line: 428624
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00328288(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_002b9024();
  FUN_0030f48c(&DAT_00af76f8,"%s_%s.bclan","item_icon","in_Select");
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_005695e4(param_1 + 0x36c,uRam00af76fc,param_3);
  FUN_004b9b64(param_1 + 0x134,param_1 + 0x36c);
  *(undefined1 *)(*(int *)(param_1 + 0x29c) + 0xb4) = 0;
  return;
}
