/**
 * thunk_FUN_006c51e4.c
 * Source line: 403613
 * Body lines: 15
 */
#include "../../../include/types.h"

int thunk_FUN_006c51e4(undefined4 param_1)

{
  int iVar1;
  
  if (iRam0095c714 == 0) {
    iVar1 = FUN_00131280(0x54,param_1,4);
    if (iVar1 == 0) {
      puRam0095c718 = NULL;
      iRam0095c714 = 0;
    }
    else {
      puRam0095c718 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0095c718 = &UNK_0090aff0;
      FUN_006c52e4(iVar1);
      iRam0095c714 = iVar1;
    }
  }
  return iRam0095c714;
}
