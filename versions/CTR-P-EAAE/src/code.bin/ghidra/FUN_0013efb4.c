/**
 * FUN_0013efb4.c
 * Source line: 151431
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_0013efb4(undefined4 *param_1)

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
  return param_1;
}
