/**
 * FUN_00694178.c
 * Source line: 998359
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00694178(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      uVar1 = uVar2 >> 3;
      if ((*(byte *)((int)param_1 + uVar1 + 0xc) >> (uVar2 & 7) & 1) == 0) {
        *(byte *)((int)param_1 + uVar1 + 0xc) =
             *(byte *)((int)param_1 + uVar1 + 0xc) | (byte)(1 << (uVar2 & 7));
        return *param_1 * uVar2 + param_1[2];
      }
      uVar2 += 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return 0;
}
