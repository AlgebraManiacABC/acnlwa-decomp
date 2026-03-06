/**
 * FUN_006c3d70.c
 * Source line: 1022812
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006c3d70(undefined4 *param_1)

{
  *param_1 = &UNK_0090afe0;
  if (param_1 == puRam0095c6d4) {
    puRam0095c6d4 = NULL;
    FUN_002f76ac(DAT_0095c6d0 + 0xec,NOP_002f777c,4,8);
    DAT_0095c6d0 = 0;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
