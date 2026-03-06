/**
 * FUN_007d0298.c
 * Source line: 1177183
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_007d0298(undefined4 *param_1)

{
  param_1[0x122] = &UNK_008f2804;
  *param_1 = &PTR_DAT_008f27d0;
  FUN_002f76ac(param_1 + 0x124,thunk_FUN_004ee514,0xc,2);
  *param_1 = &PTR_DAT_008f0940;
  FUN_002f76ac(param_1 + 0xe,thunk_FUN_00317e2c,0x114,4);
  FUN_007c81c0(param_1);
  FUN_002ffb64();
  return;
}
