/**
 * FUN_0037a958.c
 * Source line: 484582
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0037a958(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (cRam0096b8f6 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_007d5870(uRam0096b950,cRam0096b8f6,param_3);
    uVar2 = *puVar1;
  }
  puVar1 = (undefined4 *)FUN_00377f24(param_1,param_2,uVar2);
  *puVar1 = &UNK_008fbe5c;
  return;
}
