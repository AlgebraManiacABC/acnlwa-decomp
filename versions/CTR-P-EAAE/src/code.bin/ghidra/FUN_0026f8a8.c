/**
 * FUN_0026f8a8.c
 * Source line: 317514
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0026f8a8(undefined4 param_1,Item_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Item_IsNullItem(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_005b48b4(0);
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = FUN_0076c590(param_2), uVar2 = 0, iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
