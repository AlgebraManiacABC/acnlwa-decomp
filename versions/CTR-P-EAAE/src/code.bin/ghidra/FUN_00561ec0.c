/**
 * FUN_00561ec0.c
 * Source line: 806592
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00561ec0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00905fec;
  iVar1 = param_1[1];
  if (iVar1 != iRam00975334) {
    if (iVar1 != 0) {
      FUN_00141650(iVar1,param_1);
    }
    param_1[1] = iRam00975334;
  }
  FUN_002ffb64(param_1);
  return;
}
