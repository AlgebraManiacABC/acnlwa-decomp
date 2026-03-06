/**
 * FUN_00176440.c
 * Source line: 190931
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00176440(Item_t *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((param_2 == 0) && (uVar1 = Item_IsValidID(param_1), uVar1 != 0)) &&
     ((iVar2 = FUN_002fcb34(param_1), iVar2 == 0x27 ||
      (iVar2 = FUN_002fcb34(param_1), iVar2 == 0x28)))) {
    return 0;
  }
  return 1;
}
