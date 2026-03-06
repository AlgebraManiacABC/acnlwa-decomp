/**
 * FUN_001234e0.c
 * Source line: 125409
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001234e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094d54c;
  if (puRam0094d54c != NULL) {
    puRam0094d54c = NULL;
    (**(code **)*puVar1)();
    if (DAT_0094d548 != 0) {
      FUN_00128804();
      FUN_002ffb64();
    }
    DAT_0094d548 = 0;
  }
  return;
}
