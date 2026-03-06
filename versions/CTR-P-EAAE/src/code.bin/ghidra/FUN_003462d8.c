/**
 * FUN_003462d8.c
 * Source line: 443130
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003462d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_007d24b8();
  if (iVar1 != 0) {
    local_24 = uRam00974f10;
    uStack_18 = param_5;
    uStack_20 = param_3;
    uStack_1c = param_4;
    FUN_00348c50(&local_24,&local_24,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),param_2
                );
  }
  return;
}
