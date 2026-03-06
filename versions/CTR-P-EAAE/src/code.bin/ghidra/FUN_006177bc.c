/**
 * FUN_006177bc.c
 * Source line: 929487
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006177bc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0095362c == 0) {
    iVar1 = FUN_00131280(0x132b8,param_1,4);
    if (iVar1 == 0) {
      puRam00953630 = NULL;
      DAT_0095362c = 0;
    }
    else {
      puRam00953630 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam00953630 = &UNK_0090abe0;
      DAT_0095362c = FUN_00619044(iVar1);
    }
  }
  return;
}
