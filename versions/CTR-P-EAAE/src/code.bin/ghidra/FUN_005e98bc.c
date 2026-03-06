/**
 * FUN_005e98bc.c
 * Source line: 898481
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005e98bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0095deb0;
  if (puRam0095deb0 != NULL) {
    puRam0095deb0 = NULL;
    (**(code **)*puVar1)();
    if (DAT_0095deac != 0) {
      FUN_002ffb64();
    }
    DAT_0095deac = 0;
  }
  return;
}
