/**
 * FUN_006e25f8.c
 * Source line: 1041030
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006e25f8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00951698 == 0) {
    iVar1 = FUN_00131280(0x27c8,param_1,4);
    if (iVar1 == 0) {
      puRam0095169c = NULL;
      DAT_00951698 = 0;
    }
    else {
      puRam0095169c = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0095169c = &UNK_0090b104;
      DAT_00951698 = FUN_006e42b4(iVar1);
    }
  }
  return;
}
