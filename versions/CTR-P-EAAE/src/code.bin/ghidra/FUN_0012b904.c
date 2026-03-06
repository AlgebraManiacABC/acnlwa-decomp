/**
 * FUN_0012b904.c
 * Source line: 132486
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0012b904(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam009753c4;
  if (puRam009753c4 != NULL) {
    puRam009753c4 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(_DAT_009753c0);
    _DAT_009753c0 = 0;
  }
  return;
}
