/**
 * FUN_002aafa0.c
 * Source line: 348962
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_002aafa0(Item_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fcb34();
  if ((iVar1 == 0x3a || iVar1 == 0x3d) && (iVar1 = Item_GetTopBitOf2(param_1), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
