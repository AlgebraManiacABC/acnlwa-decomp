/**
 * FUN_00335214.c
 * Source line: 435890
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00335214(undefined2 *param_1,Item_t *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = Item_IsValidID(param_2);
  if ((uVar2 != 0) &&
     (((iVar3 = FUN_002fcb34(param_2), iVar3 == 6 || (iVar3 = FUN_002fcb34(param_2), iVar3 == 0x47))
      && (param_3 < 10)))) {
    uVar1 = Item_GetRawID(param_2);
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = (char)param_3;
    return 1;
  }
  return 0;
}
