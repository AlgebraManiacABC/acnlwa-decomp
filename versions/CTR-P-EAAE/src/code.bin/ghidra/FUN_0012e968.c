/**
 * FUN_0012e968.c
 * Source line: 135269
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0012e968(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094cff8;
  if (puRam0094cff8 != NULL) {
    puRam0094cff8 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(DAT_0094cff4);
    DAT_0094cff4 = 0;
  }
  return;
}
