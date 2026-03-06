/**
 * FUN_00179de0.c
 * Source line: 193761
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00179de0(Item_t *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 == 0) && (uVar1 = Item_IsValidID(param_1), uVar1 != 0)) {
    uVar1 = FUN_00768758(param_1);
    return uVar1 ^ 1;
  }
  return 1;
}
