/**
 * FUN_00184934.c
 * Source line: 199510
 * Body lines: 6
 */
#include "../../../include/types.h"

Item_t * FUN_00184934(undefined4 param_1,Item_t *param_2,undefined4 param_3,Item_t param_4,
                     undefined4 param_5)

{
  Item_t local_10;
  
  local_10 = param_4;
  Item_Clear(&local_10);
  local_10 = *param_2;
  FUN_00284f78(&local_10,param_5);
  return &local_10;
}
