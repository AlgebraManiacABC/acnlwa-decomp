/**
 * FUN_00333840.c
 * Source line: 435259
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00333840(int param_1)

{
  uRam0094f6fc = 0;
  *(undefined **)(param_1 + 0x44) = &UNK_00847c14;
  *(undefined4 *)(param_1 + 0x48) = 0x13;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(char **)(param_1 + 0x2c) = "BsMenuBestFriendListMgr";
  *(undefined1 *)(param_1 + 0x30) = 0;
  (*(code *)&UNK_003337fc)();
  *(code **)(param_1 + 0x34) = FUN_003337a0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uRam0094f6f8 = 1;
  return 2;
}
