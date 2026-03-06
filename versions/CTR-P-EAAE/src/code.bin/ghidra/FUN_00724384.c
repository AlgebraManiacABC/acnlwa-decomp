/**
 * FUN_00724384.c
 * Source line: 1079046
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00724384(undefined4 param_1,Item_t *param_2)

{
  int iVar1;
  
  if ((((DAT_0095c6d0 != 0) &&
       (iVar1 = FUN_006c4280((int)*(char *)(DAT_0095c6d0 + 0x1c)), iVar1 == 5)) &&
      (iVar1 = FUN_007244e4(param_1), iVar1 != 0x10)) &&
     ((iVar1 == 0xf &&
      ((iVar1 = Item_IsNullItem(param_2), iVar1 != 0 ||
       (iVar1 = FUN_00724284(param_1,param_2), iVar1 == 0)))))) {
    return 1;
  }
  return 0;
}
