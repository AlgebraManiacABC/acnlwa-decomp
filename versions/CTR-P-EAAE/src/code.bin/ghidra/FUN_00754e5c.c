/**
 * FUN_00754e5c.c
 * Source line: 1110584
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined8 FUN_00754e5c(int *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  
  local_18 = 0;
  uStack_14 = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if ((iVar1 != 0) && (iVar1 = FUN_00345dc0(auStack_10,&local_18), iVar1 < 0)) {
    local_18 = 0;
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,local_18);
}
