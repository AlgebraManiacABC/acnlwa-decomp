/**
 * FUN_00120fcc.c
 * Source line: 123593
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00120fcc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0094d080 == 0) {
    iVar1 = FUN_00131280(0xde4,param_1);
    if (iVar1 == 0) {
      puRam0094d088 = NULL;
      DAT_0094d080 = 0;
    }
    else {
      puRam0094d088 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0094d088 = &UNK_0090afd0;
      DAT_0094d080 = FUN_00126038(iVar1);
    }
  }
  return;
}
