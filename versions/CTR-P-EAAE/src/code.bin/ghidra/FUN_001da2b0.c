/**
 * FUN_001da2b0.c
 * Source line: 242622
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001da2b0(undefined4 *param_1)

{
  *param_1 = &UNK_008f9d94;
  if (param_1 == puRam0094d554) {
    puRam0094d554 = NULL;
    FUN_002f76ac(iRam0094d550 + 0x14,&UNK_00137d74,4,2);
    iRam0094d550 = 0;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
