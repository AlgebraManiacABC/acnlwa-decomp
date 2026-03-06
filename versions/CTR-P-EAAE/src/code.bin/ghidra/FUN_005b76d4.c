/**
 * FUN_005b76d4.c
 * Source line: 866406
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005b76d4(undefined4 param_1,Item_t *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Item_IsNullItem(param_2);
  if (((iVar1 == 0) && (uVar2 = Item_Param11Valid(param_2), uVar2 != 0)) &&
     (iVar1 = FUN_0076afbc(param_2), iVar1 != 0)) {
    GET_DAT_0095bf74();
    return;
  }
  return;
}
