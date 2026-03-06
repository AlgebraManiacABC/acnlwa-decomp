/**
 * FUN_00650174.c
 * Source line: 961736
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00650174(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  
  iVar1 = FUN_0023ffb8(auStack_10,param_1);
  if (((iVar1 != 0) && (FUN_003171b4(&local_18,&uStack_14,auStack_10), DAT_009506b0 == -1)) &&
     (DAT_009506b4 != 0)) {
    uVar2 = FUN_006dabd8(DAT_009506b4,local_18,uStack_14);
    return uVar2;
  }
  return 0;
}
