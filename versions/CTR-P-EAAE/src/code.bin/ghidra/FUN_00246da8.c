/**
 * FUN_00246da8.c
 * Source line: 297215
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00246da8(undefined4 *param_1)

{
  *param_1 = &UNK_008fa36c;
  if (param_1 == puRam0094d544) {
    puRam0094d544 = NULL;
    FUN_00136cc8(iRam0094d540 + 0x10);
    iRam0094d540 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
