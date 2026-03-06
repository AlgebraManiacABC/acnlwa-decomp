/**
 * FUN_003e2a88.c
 * Source line: 556814
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_003e2a88(int param_1)

{
  uint local_8;
  
  if (0 < *(int *)(param_1 + 8)) {
    local_8 = 0xe7e3ffff;
    local_8 = FUN_004121b0(param_1 + 4);
    if ((local_8 & 0x80000000) == 0) {
      local_8 = 0;
    }
    else {
      FUN_004266f8(0x8000,0,&local_8);
    }
    return local_8;
  }
  return 0xe0a14827;
}
