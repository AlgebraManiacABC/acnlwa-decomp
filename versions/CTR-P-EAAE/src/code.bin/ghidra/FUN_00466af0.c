/**
 * FUN_00466af0.c
 * Source line: 632994
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00466af0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  local_10 = 0;
  uVar1 = strlen(param_2);
  uVar2 = FUN_00129da0(&local_10,param_2,uVar1,0);
  if ((uVar2 & 0x80000000) == 0) {
    *param_1 = local_10;
  }
  return uVar2;
}
