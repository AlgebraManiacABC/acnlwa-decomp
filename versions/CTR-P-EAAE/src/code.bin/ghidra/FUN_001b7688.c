/**
 * FUN_001b7688.c
 * Source line: 222522
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_001b7688(undefined4 param_1)

{
  int iVar1;
  
  if (_DAT_0095c71c == 0) {
    iVar1 = FUN_00131280(0x3c,param_1,4);
    if (iVar1 == 0) {
      puRam0095c720 = NULL;
      _DAT_0095c71c = 0;
    }
    else {
      puRam0095c720 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0095c720 = &UNK_008f9a24;
      _DAT_0095c71c = iVar1;
    }
  }
  return _DAT_0095c71c;
}
