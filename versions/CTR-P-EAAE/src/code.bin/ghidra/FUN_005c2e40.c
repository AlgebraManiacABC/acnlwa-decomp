/**
 * FUN_005c2e40.c
 * Source line: 872514
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005c2e40(Item_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Item_t local_18;
  undefined1 local_14;
  Item_t local_10;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    Item_CopyAndReturn(&local_10,param_1);
    local_18 = local_10;
    local_14 = 4;
    uVar2 = FUN_0066ac8c(iVar1,&local_18,1,0,1,0);
    return uVar2;
  }
  return 0;
}
