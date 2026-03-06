/**
 * FUN_007237e0.c
 * Source line: 1078362
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_007237e0(int param_1)

{
  bool bVar1;
  
  if ((*(uint *)(param_1 + 0xd4) & 1) != 0) {
    return 1;
  }
  if (iRam00950868 != 0) {
    bVar1 = *(code **)(param_1 + 0xb8) == FUN_002f635c;
    if (bVar1) {
      param_1 = *(int *)(param_1 + 0xbc);
    }
    if (bVar1 && param_1 == 0) {
      return 1;
    }
  }
  return 0;
}
