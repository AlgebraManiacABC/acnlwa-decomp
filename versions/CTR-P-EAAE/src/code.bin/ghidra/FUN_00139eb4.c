/**
 * FUN_00139eb4.c
 * Source line: 146836
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00139eb4(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094d000;
  if (puRam0094d000 != NULL) {
    puRam0094d000 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(uRam0094cffc);
    uRam0094cffc = 0;
  }
  return;
}
