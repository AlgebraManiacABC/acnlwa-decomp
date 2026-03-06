/**
 * FUN_00139d28.c
 * Source line: 146734
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00139d28(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094d008;
  if (puRam0094d008 != NULL) {
    puRam0094d008 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(DAT_0094d004);
    DAT_0094d004 = 0;
  }
  return;
}
