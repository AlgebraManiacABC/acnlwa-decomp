/**
 * FUN_0011d8c0.c
 * Source line: 120699
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0011d8c0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_009529cc == 0) {
    iVar1 = FUN_00131280(0x670,param_1,4);
    if (iVar1 == 0) {
      DAT_009529d0 = NULL;
      DAT_009529cc = 0;
    }
    else {
      DAT_009529d0 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *DAT_009529d0 = &UNK_008f98bc;
      DAT_009529cc = FUN_0011f054(iVar1);
    }
  }
  return;
}
