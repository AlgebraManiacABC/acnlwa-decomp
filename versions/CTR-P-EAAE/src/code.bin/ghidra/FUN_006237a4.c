/**
 * FUN_006237a4.c
 * Source line: 937133
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006237a4(int param_1,uint param_2)

{
  if (3 < param_2) {
    return;
  }
  FUN_00624b24(param_1 + 8);
  FUN_00624b24(param_1 + 0x10,param_2);
  FUN_00624b24(param_1 + 0x18,param_2);
  *(undefined1 *)(param_1 + 0x253e) = 0;
  return;
}
