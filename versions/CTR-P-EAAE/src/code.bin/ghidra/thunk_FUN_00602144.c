/**
 * thunk_FUN_00602144.c
 * Source line: 410352
 * Body lines: 10
 */
#include "../../../include/types.h"

void thunk_FUN_00602144(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x364) = param_2;
  *(int *)(param_2 + 4) = param_1;
  if ((((iRam0094ee44 != 0) && (iVar1 = FUN_003170f8(0xe,0), iVar1 != 0)) &&
      ((iVar1 = FUN_0052c878(), iVar1 == 0 ||
       ((*(short *)(iVar1 + 0xc) != 0x1e3 && (*(short *)(iVar1 + 0xc) != 0x1a4)))))) &&
     (*(char *)(iRam0094ee44 + 0x14) == '\0')) {
    *(undefined1 *)(iRam0094ee44 + 0x14) = 1;
  }
  return;
}
