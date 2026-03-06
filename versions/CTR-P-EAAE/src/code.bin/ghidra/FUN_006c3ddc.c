/**
 * FUN_006c3ddc.c
 * Source line: 1022828
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006c3ddc(undefined4 *param_1)

{
  *param_1 = &UNK_0090afe0;
  if (param_1 == puRam0095c6d4) {
    puRam0095c6d4 = NULL;
    FUN_002f76ac(DAT_0095c6d0 + 0xec,NOP_002f777c,4,8);
    DAT_0095c6d0 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
