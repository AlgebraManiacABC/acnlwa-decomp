/**
 * FUN_00160c10.c
 * Source line: 177463
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00160c10(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (1 < uRam0095e5b0) {
    while (*(int *)(uVar1 * 0xc + 0xad9904) != param_1) {
      uVar1 += 1;
      if (uRam0095e5b0 <= uVar1) {
        return;
      }
    }
    *(undefined1 *)(uVar1 * 0xc + 0xad9908) = 0;
  }
  return;
}
