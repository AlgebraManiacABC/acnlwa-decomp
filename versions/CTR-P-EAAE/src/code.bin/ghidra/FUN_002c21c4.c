/**
 * FUN_002c21c4.c
 * Source line: 362394
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002c21c4(undefined4 param_1)

{
  int iVar1;
  
  if (_DAT_0095df64 == 0) {
    iVar1 = FUN_00131280(0x38,param_1,4);
    if (iVar1 == 0) {
      puRam0095df68 = NULL;
      _DAT_0095df64 = 0;
    }
    else {
      puRam0095df68 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0095df68 = &UNK_008fa9c4;
      _DAT_0095df64 = FUN_002c27a4(iVar1);
    }
  }
  return;
}
