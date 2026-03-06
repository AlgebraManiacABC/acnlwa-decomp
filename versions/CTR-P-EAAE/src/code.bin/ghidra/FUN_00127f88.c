/**
 * FUN_00127f88.c
 * Source line: 129449
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00127f88(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0095c720;
  if (puRam0095c720 != NULL) {
    puRam0095c720 = NULL;
    (**(code **)*puVar1)();
    if (_DAT_0095c71c != 0) {
      FUN_002ffb64();
    }
    _DAT_0095c71c = 0;
  }
  return;
}
