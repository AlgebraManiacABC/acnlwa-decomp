/**
 * FUN_005f33a8.c
 * Source line: 904630
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005f33a8(undefined4 *param_1)

{
  *param_1 = &UNK_009097b8;
  if (param_1 == puRam0095dec0) {
    puRam0095dec0 = NULL;
    FUN_00137e8c(DAT_0095debc + 0x14);
    DAT_0095debc = 0;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
