/**
 * FUN_001b3174.c
 * Source line: 220140
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001b3174(int param_1,uint param_2,int param_3)

{
  if (param_2 < 0xf) {
    if ((*(ushort *)(param_3 * 2 + 0x95c010) & 0xf) == 0) {
      *(char *)(param_1 + param_2 + 0x58) = (char)param_3;
    }
    else {
      *(undefined1 *)(param_1 + param_2 + 0x58) = 0;
    }
  }
  return;
}
