/**
 * FUN_0032ae24.c
 * Source line: 430753
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0032ae24(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0094ccb8 == 0) {
    iVar1 = FUN_00131280(0x1ec8,param_1,4);
    if (iVar1 == 0) {
      puRam0094ccbc = NULL;
      DAT_0094ccb8 = 0;
    }
    else {
      puRam0094ccbc = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0094ccbc = &UNK_008faaec;
      DAT_0094ccb8 = FUN_0032b7d0(iVar1);
    }
  }
  return;
}
