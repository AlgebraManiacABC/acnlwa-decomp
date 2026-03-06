/**
 * FUN_0075e058.c
 * Source line: 1118362
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0075e058(uint param_1,uint param_2)

{
  bool bVar1;
  
  if (param_2 < 8) {
    bVar1 = *(byte *)(param_1 + 0x18) == param_2;
    if (bVar1) {
      param_1 = (uint)*(byte *)(param_1 + 0x12);
    }
    if (bVar1 && param_1 == 2) {
      return 1;
    }
  }
  return 0;
}
