/**
 * FUN_00179528.c
 * Source line: 193367
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00179528(Item_t *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((param_2 == 0) && (uVar1 = Item_IsValidID(param_1), uVar1 != 0)) &&
     ((iVar2 = FUN_002fcb34(param_1), iVar2 == 0x75 || iVar2 == 0x76 ||
      (iVar2 = FUN_00767fdc(param_1), iVar2 != 0)))) {
    return 0;
  }
  return 1;
}
