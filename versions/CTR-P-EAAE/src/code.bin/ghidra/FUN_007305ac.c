/**
 * FUN_007305ac.c
 * Source line: 1087126
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_007305ac(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*(char *)(*(int *)(param_1 + 4) + uVar1 * 0x10) != '\x01' &&
         (*(char *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + 0x10) != '\x01'))) {
    uVar1 += 2;
    if (0xb < uVar1) {
      return 0;
    }
  }
  return 1;
}
