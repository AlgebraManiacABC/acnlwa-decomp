/**
 * FUN_00570ab0.c
 * Source line: 816602
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00570ab0(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x7a5) != '\0') {
    bVar1 = ~*(byte *)(param_1 + 0x7a3) & 1;
    if (param_2 == 0) {
      *(byte *)(param_1 + 0x7a2) = bVar1;
    }
    *(byte *)(param_1 + 0x7a3) = bVar1;
  }
  return;
}
