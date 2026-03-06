/**
 * FUN_00139e3c.c
 * Source line: 146802
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00139e3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094d0d4;
  if (puRam0094d0d4 != NULL) {
    puRam0094d0d4 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(uRam0094d0d0);
    uRam0094d0d0 = 0;
  }
  return;
}
