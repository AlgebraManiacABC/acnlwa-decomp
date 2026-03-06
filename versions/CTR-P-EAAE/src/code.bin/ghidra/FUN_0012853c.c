/**
 * FUN_0012853c.c
 * Source line: 129757
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0012853c(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0095df68;
  if (puRam0095df68 != NULL) {
    puRam0095df68 = NULL;
    (**(code **)*puVar1)();
    if (_DAT_0095df64 != 0) {
      FUN_002ffb64();
    }
    _DAT_0095df64 = 0;
  }
  return;
}
