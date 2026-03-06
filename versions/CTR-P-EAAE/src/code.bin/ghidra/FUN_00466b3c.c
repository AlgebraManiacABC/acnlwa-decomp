/**
 * FUN_00466b3c.c
 * Source line: 633012
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00466b3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_10;
  
  local_10 = 0;
  uVar1 = FUN_00129da0(&local_10,param_2,param_3,0);
  if ((uVar1 & 0x80000000) == 0) {
    *param_1 = local_10;
  }
  return uVar1;
}
