/**
 * FUN_002a3654.c
 * Source line: 344479
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002a3654(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0094d06c == 0) {
    iVar1 = FUN_00131280(0x23c8,param_1,4);
    if (iVar1 == 0) {
      puRam0094d070 = NULL;
      DAT_0094d06c = 0;
    }
    else {
      puRam0094d070 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0094d070 = &UNK_008fa998;
      DAT_0094d06c = FUN_002a4abc(iVar1);
    }
  }
  return;
}
