/**
 * FUN_00724024.c
 * Source line: 1078864
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00724024(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 == 0xa4) {
    GET_DAT_0095bf74();
    return;
  }
  if ((_DAT_00aaf14c != 0) &&
     (iVar1 = FUN_00716804(_DAT_00aaf14c + 0x89d0,
                           *(undefined1 *)(_DAT_00aaf14c + 0x89d0 + *(int *)(param_1 + 200))),
     iVar1 != -1)) {
    FUN_00312a4c(DAT_0095debc,param_2,"STR_Emoticon",iVar1);
    return;
  }
  return;
}
