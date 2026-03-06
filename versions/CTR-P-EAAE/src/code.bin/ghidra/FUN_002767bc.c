/**
 * FUN_002767bc.c
 * Source line: 321401
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_002767bc(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x114) < 0x41) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0x14) == 0) {
        *(undefined4 *)(param_1 + uVar1 * 4 + 0x14) = param_2;
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
        return uVar1;
      }
      uVar1 += 1;
    } while (uVar1 < 0x40);
  }
  return 0x41;
}
