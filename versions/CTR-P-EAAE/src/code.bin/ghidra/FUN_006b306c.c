/**
 * FUN_006b306c.c
 * Source line: 1010703
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006b306c(undefined4 *param_1)

{
  *param_1 = &UNK_0090afd0;
  if (param_1 == puRam0094d088) {
    puRam0094d088 = NULL;
    FUN_0013bee0(DAT_0094d080);
    DAT_0094d080 = 0;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
