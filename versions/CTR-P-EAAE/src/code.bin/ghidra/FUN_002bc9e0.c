/**
 * FUN_002bc9e0.c
 * Source line: 358052
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002bc9e0(undefined4 *param_1)

{
  *param_1 = &UNK_008fa9b4;
  if (param_1 == puRam0094cd24) {
    puRam0094cd24 = NULL;
    FUN_002f76ac(iRam0094cd20 + 0x2c,FUN_0013d73c,0x18,6);
    iRam0094cd20 = 0;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
