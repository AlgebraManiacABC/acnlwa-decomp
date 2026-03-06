/**
 * FUN_00777654.c
 * Source line: 1134871
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined8 FUN_00777654(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  
  local_18 = 0;
  uStack_14 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x10))();
  if ((iVar1 != 0) && (iVar1 = FUN_00345dc0(auStack_10,&local_18), iVar1 < 0)) {
    local_18 = 0;
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,local_18);
}
