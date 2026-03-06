/**
 * FUN_00750994.c
 * Source line: 1107079
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00750994(int param_1)

{
  uint uVar1;
  
  if (*(char **)(param_1 + 0x5f4) == NULL) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (uint)**(char **)(param_1 + 0x5f4);
    if (0xfe < uVar1) {
      uVar1 = 0;
    }
    uVar1 &= 0xff;
  }
  return uVar1;
}
