/**
 * FUN_00139e78.c
 * Source line: 146819
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00139e78(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094d564;
  if (puRam0094d564 != NULL) {
    puRam0094d564 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(uRam0094d560);
    uRam0094d560 = 0;
  }
  return;
}
