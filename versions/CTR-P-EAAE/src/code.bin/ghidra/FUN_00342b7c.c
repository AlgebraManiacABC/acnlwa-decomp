/**
 * FUN_00342b7c.c
 * Source line: 440463
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined1 * FUN_00342b7c(Item_t *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 local_68 [92];
  
  puVar1 = (undefined1 *)Item_IsNullItem(param_1);
  if (puVar1 == NULL) {
    FUN_002fe7f4(local_68,param_1,0);
    FUN_002fe874(param_2,local_68,0);
    puVar1 = local_68;
  }
  return puVar1;
}
