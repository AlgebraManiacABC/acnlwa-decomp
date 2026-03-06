/**
 * FUN_005ffd94.c
 * Source line: 916555
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005ffd94(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_2 + 8) = param_1;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    *(int *)(param_3 + 0x364) = iVar1;
    *(int *)(iVar1 + 4) = param_3;
    if ((((iRam0094ee44 != 0) && (iVar1 = FUN_003170f8(0xe,0), iVar1 != 0)) &&
        ((iVar1 = FUN_0052c878(), iVar1 == 0 ||
         ((*(short *)(iVar1 + 0xc) != 0x1e3 && (*(short *)(iVar1 + 0xc) != 0x1a4)))))) &&
       (*(char *)(iRam0094ee44 + 0x14) == '\0')) {
      *(undefined1 *)(iRam0094ee44 + 0x14) = 1;
    }
  }
  return;
}
