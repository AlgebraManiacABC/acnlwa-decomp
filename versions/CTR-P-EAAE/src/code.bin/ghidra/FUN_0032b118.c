/**
 * FUN_0032b118.c
 * Source line: 430824
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0032b118(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &UNK_008faaec;
  if (param_1 == puRam0094ccbc) {
    puRam0094ccbc = NULL;
    piVar2 = (int *)(DAT_0094ccb8 + 0x1ec4);
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_00136e58(iVar1,0);
    }
    FUN_00136cc8(piVar2);
    DAT_0094ccb8 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
