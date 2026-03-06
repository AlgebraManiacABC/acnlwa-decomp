/**
 * FUN_001804e4.c
 * Source line: 197752
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_001804e4(Item_t *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_2 == 0) && (uVar1 = Item_IsValidID(param_1), uVar1 != 0)) &&
     (iVar2 = FUN_007690dc(param_1), iVar2 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
