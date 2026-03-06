/**
 * FUN_001141a4.c
 * Source line: 114344
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_001141a4(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((byte)(&UNK_0088ec60)[uVar1] <= param_1) {
      return uVar1 & 0xff;
    }
    if ((byte)(&UNK_0088ec61)[uVar1] <= param_1) break;
    uVar1 += 2;
    if (5 < (int)uVar1) {
      return 5;
    }
  }
  return uVar1 + 1 & 0xff;
}
