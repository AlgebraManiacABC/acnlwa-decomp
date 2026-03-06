/**
 * FUN_00579b64.c
 * Source line: 822720
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00579b64(int param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0xb09) < '\0') {
    if (*(short *)(param_1 + 0xafa) == 5) {
      uVar1 = 6;
    }
    else {
      if (*(short *)(param_1 + 0xafa) != 2) {
        return;
      }
      uVar1 = 3;
    }
    *(undefined2 *)(param_1 + 0xafa) = uVar1;
  }
  return;
}
