/**
 * FUN_001edf48.c
 * Source line: 253303
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_001edf48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_18;
  char *local_14;
  
  iVar1 = FUN_00713a70();
  if (iVar1 != 0) {
    local_14 = "NPC_Honma_Commentary";
    local_18 = &DAT_009047f8;
    iVar1 = FUN_008272dc(iVar1,&local_18);
    if (iVar1 == 0) {
      uVar2 = FUN_001f13a0(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}
