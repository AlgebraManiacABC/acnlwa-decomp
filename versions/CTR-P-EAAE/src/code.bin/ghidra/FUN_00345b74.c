/**
 * FUN_00345b74.c
 * Source line: 442753
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00345b74(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_003461d4(param_1,2,param_2,0);
  if (((int)uVar1 < 0) && (uVar1 = FUN_003461d4(param_1,1,param_2,0), (uVar1 & 0x80000000) != 0)) {
    uVar1 = 0xc8804464;
  }
  return uVar1;
}
