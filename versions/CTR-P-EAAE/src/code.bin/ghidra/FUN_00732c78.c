/**
 * FUN_00732c78.c
 * Source line: 1088542
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00732c78(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    do {
      if (*(byte *)(*(int *)(param_1 + 0x74) + uVar1) == param_2) {
        if (*(char *)(*(int *)(param_1 + 0x70) + uVar1 * 0x54 + 0x27) != '\x02') {
          return 0;
        }
        return 1;
      }
      uVar1 += 1;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  return 0;
}
