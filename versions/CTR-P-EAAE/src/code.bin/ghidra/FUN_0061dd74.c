/**
 * FUN_0061dd74.c
 * Source line: 933511
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0061dd74(int param_1,uint param_2)

{
  if (3 < param_2) {
    return;
  }
  FUN_00624b24(param_1 + 0x18);
  FUN_00624b24(param_1 + 0x20,param_2);
  FUN_00624b24(param_1 + 0x28,param_2);
  FUN_00624b24(param_1 + 0x30,param_2);
  FUN_00624b24(param_1 + 0x38,param_2);
  FUN_00624b24(param_1 + 0x40,param_2);
  *(undefined1 *)(param_1 + 0x44) = 3;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  return;
}
