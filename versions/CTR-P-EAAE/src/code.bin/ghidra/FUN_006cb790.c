/**
 * FUN_006cb790.c
 * Source line: 1028248
 * Body lines: 5
 */
#include "../../../include/types.h"

uint FUN_006cb790(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 0xfc) && (iVar1 = FUN_005ca27c(), iVar1 == 0xf)) {
    return (int)(param_1 - 0x90) % 4 & 0xff;
  }
  return 4;
}
