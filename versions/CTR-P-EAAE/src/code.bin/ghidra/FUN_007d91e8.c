/**
 * FUN_007d91e8.c
 * Source line: 1182234
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_007d91e8(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 0;
    if (uRam0096b978 != 0) {
      do {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + uVar1 * 0x14))
                  (*(int *)(param_1 + 8) + uVar1 * 0x14);
        uVar1 += 1;
      } while (uVar1 < uRam0096b978);
    }
    FUN_00361988(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
