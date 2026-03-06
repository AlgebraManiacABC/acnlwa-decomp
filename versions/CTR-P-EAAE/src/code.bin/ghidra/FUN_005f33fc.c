/**
 * FUN_005f33fc.c
 * Source line: 904646
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005f33fc(undefined4 *param_1)

{
  *param_1 = &UNK_009097b8;
  if (param_1 == puRam0095dec0) {
    puRam0095dec0 = NULL;
    FUN_00137e8c(DAT_0095debc + 0x14);
    DAT_0095debc = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
