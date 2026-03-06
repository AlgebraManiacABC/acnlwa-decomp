/**
 * FUN_007d0404.c
 * Source line: 1177212
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_007d0404(undefined4 *param_1)

{
  param_1[0x122] = &UNK_008f284c;
  *param_1 = &PTR_DAT_008f2818;
  FUN_002f76ac(param_1 + 0x124,thunk_FUN_004ee514,0xc,2);
  *param_1 = &PTR_DAT_008f0968;
  FUN_002f76ac(param_1 + 0xe,thunk_FUN_00317e2c,0x114,4);
  FUN_007c83f4(param_1);
  FUN_002ffb64();
  return;
}
