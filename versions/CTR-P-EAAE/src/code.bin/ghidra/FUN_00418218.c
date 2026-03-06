/**
 * FUN_00418218.c
 * Source line: 583075
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00418218(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(ushort *)(param_1 + 0x42) != param_2) {
    uVar1 = 0;
    while (*(ushort *)(param_1 + uVar1 * 2 + 0x10) != param_2) {
      uVar1 += 1;
      if (0xb < uVar1) {
        return;
      }
    }
    *(ushort *)(param_1 + uVar1 * 2 + 0x10) = *(ushort *)(param_1 + 0x42);
  }
  return;
}
