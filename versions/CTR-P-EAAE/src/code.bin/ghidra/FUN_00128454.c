/**
 * FUN_00128454.c
 * Source line: 129704
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00128454(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam00953868;
  if (puRam00953868 != NULL) {
    puRam00953868 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(DAT_00953864);
    DAT_00953864 = 0;
  }
  return;
}
