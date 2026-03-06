/**
 * FUN_0026f808.c
 * Source line: 317496
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0026f808(undefined4 param_1,Item_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Item_IsNullItem(param_2);
  if (iVar1 == 0) {
    FUN_0076ab28(param_2);
    FUN_002fcb34(param_2);
    uVar2 = FUN_002fb94c();
    return uVar2;
  }
  return 0;
}
